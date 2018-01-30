#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000009;
long long power(long long n, long long p){
    long long cur, res;
    cur = n;
    res = 1;
    while(p){
        if(p%2 == 1){
            res *= cur;
            res %= MOD;
        }
        p /= 2;
        cur *= cur;
        cur %= MOD;
    }
    return res;
}

int main() {
    long long n,m,k;
    cin >> n >> m >> k ;
    long long doubles = n/k;
    long long times = doubles - (n-m);
    if (times <= 0){
        cout << m;
        return 0;
    }
    long long ans = ( (((k%MOD) * ( (power(2,times))%MOD) )%MOD ) - k%MOD )%MOD;
    while (ans < 0){
        ans += MOD;
    }
    ans *= 2;
    ans %= MOD;
    m = m - (times*k);
    m %= MOD;
    ans += m;
    ans %= MOD;
    cout << ans;
}
