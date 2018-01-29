#include <bits/stdc++.h>
using namespace std;

double arr[10000];

double binary_search (double start, double end, double k, int n){
    double mid = start + (end - start) / 2 , surplus=0;
    while (start < end) {
        mid = start + (end - start) / 2;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= mid) surplus += (arr[i] - mid) * ((100 - k) / 100);
            else if (arr[i] < mid) surplus += arr[i] - mid;
        }
        if (abs(surplus) <= 0.0000001) return mid;
        else if (surplus > 0.0000001) start = mid;
        else if (surplus < -0.0000001) end = mid;
        surplus =0;
    }
    return mid;
}
int main() {
    int n;
    double k,max,min;
    cin >> n >> k >> arr[0];
    max = min = arr[0];
    for (int i=1; i<n; i++){
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
        else if (arr[i] < min) min = arr[i];
    }
    double answer = binary_search(min,max,k,n);
    cout.precision(10) ;
    cout << fixed << answer;
    return 0;
}