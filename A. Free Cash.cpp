#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "><+-.,[]";
    int arr[8] = {1000,1001,1010,1011,1100,1101,1110,1111};
    string p;
    cin >> p;
    string q = to_string(arr[s.find(p[0])]);
    // initialization?
    int n = p.length();
    for (int i=1; i<n; i++){
        q += to_string(arr[s.find(p[i])]);
    }
    // string q now has the input in binary
    n = q.length();
    long long arr2[n];
    for (int i=n, j=0; i>0; i-- , j++){
        arr2[j] = q[i-1] - '0';
    }
    // arr2 now has the reverse of binary
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            arr2[j] = (arr2[j]*2) % 1000003;
        }
    }
    long long total=0;
    for (int i=0; i<n; i++){
        total = (total + arr2[i]) % 1000003;
    }
    cout << total;
}