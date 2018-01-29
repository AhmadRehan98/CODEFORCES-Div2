#include <iostream>
using namespace std;
int arr[1000005];
int binary_search (int start, int end, int q){
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= q && arr[mid-1] + 1 <= q) return mid + 1;
        else if (arr[mid] < q) start = mid + 1;
        else if (arr[mid] > q) end = mid - 1;
    }
}
int main() {
    int n, m, q;
    cin >> n;
    cin >> arr[0];
    for (int i=1; i<n; i++){
        cin >> arr[i];
        arr[i] = arr[i] + arr[i-1];
    }
    cin >> m;
    for (int i=0; i<m; i++){
        cin >> q;
        cout << binary_search (0 , n-1, q) << endl;
    }
    return 0;
}