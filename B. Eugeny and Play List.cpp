#include <iostream>
using namespace std;
long long arr[100000];

int binary_search (long long start, long long end, long long moment, int n){
    while (start <= end){
        long long mid = start + (end - start+1)/2;
        if ( (mid == 0 && arr[mid] >= moment) || (arr[mid] >= moment && arr[mid-1] < moment)) return mid+1;
        else if (arr[mid] < moment) start = mid;
        else if (arr[mid] > moment) end = mid-1;
    }
}

int main() {
    int n, m; long long times, duration, moment;
    cin >> n >> m;
    cin >> times >> duration;
    arr[0] = times*duration;
    for (int i=1; i<n; i++){
        cin >> times >> duration;
        arr[i] = arr[i-1] + (times*duration);
    }
    for (int i=0; i<m; i++){
        cin >> moment;
        cout << binary_search (0,n-1,moment, n) << endl;
    }
    return 0;
}