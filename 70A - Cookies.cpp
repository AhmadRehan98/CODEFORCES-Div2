#include <bits/stdc++.h>
using namespace std;
long long spaces;
long long mod = 1000003;
long long power(long long n, long long p){
    if(p == 0)return 1;
    if(p % 2 == 0)
        return power((n*n)%mod, p/2) % mod;
    else
        return ( (power(n, p-1) % mod ) * (n%mod) ) % mod;
}
int main() {
    long long n;
    spaces = 0;
    cin >> n;
    cout <<  power(3,n-1);
}
