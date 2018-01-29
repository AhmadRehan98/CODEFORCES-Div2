/////////////////////////////////////////////////// SLOWEST CODE - TLE  ///////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
long long spaces;
void rec (int n){
    int powa = (int) (pow(2,n-1));
    spaces += powa;
    spaces %= 1000003;
    for (int i=n-1; i>=1; i--) {
        int limit = (int) pow(2,n-i-1);
        for (int j=1; j<= limit; j++){
            rec(i);
        }
    }
}
int main() {
    int n;
    spaces = 0;
    cin >> n;
    if (n == 0){
        cout << 1;
        return 0;
    }
    rec (n);
    cout << spaces;
}

/////////////////////////////////////////////////// ANOTHER CODE - 30MS ///////////////////////////////////////////////////

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
    if (n==0) cout << 1;
    else cout <<  power(3,n-1);
}

/////////////////////////////////////////////////// ANOTHER CODE - 15MS ///////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
long long mod = 1000003;
long long power(long long n, long long p){
    long long cur, res;
    cur = n;
    res = 1;
    while(p){
        if(p%2 == 1){
            res *= cur;
            res %= mod;
        }
        p /= 2;
        cur *= cur;
        cur %= mod;
    }
    return res;
}
int main() {
    long long n;
    cin >> n;
    cout <<  power(3,n-1);
}
