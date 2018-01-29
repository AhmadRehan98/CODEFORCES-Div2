#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int sum = 0;
    stack<char> stak;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') stak.push('(');
        else if (s[i] == ')') {
            if (!stak.empty()) {
                sum++;
                stak.pop();
            }
        }
    }
    cout << sum*2;
}