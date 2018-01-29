#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int n = s1.length();
    for (int i=0; i<n; i++)
    {
        if (s1[i] != s2[i])
        {
            cout << 1;
        }
        else cout << 0;
    }
    return 0;
}
