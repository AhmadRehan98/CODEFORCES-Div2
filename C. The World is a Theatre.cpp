#include <bits/stdc++.h>
using namespace std;

int main() {
    long long arr[30][30];
    long long n,m,t, girls, boys, ways=0;
    cin >> n >> m >> t;
    int max = n>m? n : m;
    for (int i=0; i<max; i++){           // i index starts from 0 !
        for (int j=0; j<=i; j++){
            if (j==0) {
                arr[i][0] = i+1;  continue;
            }
            if (j == i) {
                arr[i][j] = 1;  continue;
            }
            arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    }
    girls = 1; boys = t-girls;
    while (true){
        if (girls > m || boys < 4) break;
        if (boys > n){
            girls++; boys--; continue;
        }
        ways += arr[n-1][boys-1] * arr[m-1][girls-1];
        girls++; boys--;
    }
    cout << ways;
}