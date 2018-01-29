#include <iostream>
using namespace std;
int main() {
    string s;
    int n , ones , twos , threes, total=0;
    ones = twos = threes = 0;
    cin >> n;
    int arr[n];
    fill(arr, arr+n, 0);
    for (int i=0; i<n; i++){
        cin >> s;
        int m = s.length();
        for (int j=0; j<m; j++){
            arr[i] += s[j] - '0';
        }
        if (arr[i]% 3 == 0) threes++;
        if (arr[i]% 3 == 1) ones++;
        if (arr[i]% 3 == 2) twos++;
    }
    total += min(ones,twos);
    total += threes/2;
    cout << total;
    return 0;
}