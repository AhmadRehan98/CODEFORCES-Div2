#include <bits/stdc++.h>
using namespace std;

int main() {
    long long d,k,a,b,t;
    cin >> d >> k >> a >> b >> t;
    long long repair = (d/k);
    //no need for any repairs
    if (k > d){
        cout << a*d; // car only
        return 0;
    }
    //foot faster than car+t
    if ((a*k + t) > b*k){
        if (d>k) cout << a*k + (d-k)*b; //car until breaks, 0 repairs, then foot
        return 0;
    }
    if ((a*k + t) <= b*k){
        if ((repair-1)*t + (a*d)-(d%k) < (b*d)-(d%k) ){ //
            if (d%k == 0) cout << ((d/k)-1)*t + (a*d); //car will break at end point, last repair not needed
            else if ((d%k)*a + t < (d%k)*b) cout << (d/k*t) + (a*d); //car only
            else cout << (repair-1)*t + (a*(d-d%k)) + ((d%k)*b); //car without last repair
            return 0;
        }
    }
}
