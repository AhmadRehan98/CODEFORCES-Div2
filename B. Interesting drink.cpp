#include <bits/stdc++.h>
using namespace std;
long long arr[100005];
int binarysearch (int start, int end, int x){
    while(start < end) {
        int mid = start + (end-start+1)/2;
        if (arr[mid] > x)
            end = mid-1;
        else
            start = mid;
    }
    return start;
}
int main() {
    int n,q,m;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >>arr[i];
    }
    sort (arr,arr+n);
    cin >> q;
    for (int i=0; i<q; i++){
        cin >> m;
        if (m < arr[0])
            cout << 0 << endl;
        //int output = binarysearch (0, n-1, m) + 1;
        else
            cout << binarysearch (0, n-1, m) + 1 << endl;
    }
    return 0;
}