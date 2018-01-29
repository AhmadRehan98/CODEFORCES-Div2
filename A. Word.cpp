#include <bits/stdc++.h>
using namespace std;
int main() {
    int up, low;
    up = low = 0;
    string s;
    cin >> s;
    int n = s.length();
    for (int i=0; i<n; i++)
    {
        if (isupper(s[i])) up++;
        if (islower(s[i])) low++;
    }
    if (low >= up)
    {
        for (int i=0; i<n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    if (up > low)
    {
        for (int i=0; i<n; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}