#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a;
    cin >> n >> a;
    if (a%2 == 0)   a = n-a;
    cout << a/2 + 1;
}
