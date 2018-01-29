#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, moves=0, y; string s;
    cin >> n;
    stack <int> stak_org;
    stack <int> stak_thft;
    cin >> s;
    for (int i=0; i<n; i++){
        y = s[i] - '0';
        stak_org.push(y);
    }
    cin >> s;
    for (int i=0; i<n; i++){
        y = s[i] - '0';
        stak_thft.push(y);
    }
    for (int i=0; i<n; i++){
        if (abs(stak_org.top() - stak_thft.top()) < abs(10- abs((stak_org.top()-stak_thft.top()))) )
            moves += abs(stak_org.top() - stak_thft.top());
        else
            moves += abs(10- abs((stak_org.top()-stak_thft.top())));
        stak_org.pop();
        stak_thft.pop();
    }
    cout << moves;
    return 0;
}