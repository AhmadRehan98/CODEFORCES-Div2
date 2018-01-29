#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,a,b,x;
    cin >> n >> a >> b;
    for (int i=0; i<n; i++){
        cin >> x;
        if (i != 0) cout << " ";
        cout << ((x*a)%b)/a;
    }
}