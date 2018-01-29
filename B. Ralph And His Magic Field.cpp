#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
long long inv = 1000000006;
long long power (long long b, long long p){
    if (p==0) return 1;
    if (p%2 != 0){
        return ( b%mod * power(b,p-1)%mod ) % mod;
    }
    return power((b*b)%mod, p/2) % mod;
}
int main() {
    long long n,m;
    int k;
    cin >> n >> m >> k;
    if ((n+m)%2 != 0 && k == -1){
                cout << 0;
                return 0;
    }
    long long powa = ( ((n-1)% inv)  *  ((m-1)%inv ) ) % inv;
    cout << ((power(2,powa))% mod);
}
