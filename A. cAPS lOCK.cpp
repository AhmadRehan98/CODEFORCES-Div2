#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int t = 0;
    bool one = isupper(s[1]);
    bool zero = isupper(s[0]);
    if (s.length() == 1)
    {
        if (zero == 0)
        {
            s[0] = toupper(s[0]);
            cout << s;
            return 0;
        }
        if (zero == 1)
        {
            s[0] = tolower(s[0]);
            cout << s;
            return 0;
        }
    }
    for (int i=1, n=s.length(); i<n; i++)
    {
         bool one = isupper(s[i]);
         if (one == 0)
         {
             t = 1;
         }
    }
    if (t == 1)
        one = 0;
    if (one == 1)
    {
        if (zero == 1)
            s[0] = tolower(s[0]);

        else if (zero == 0)
            s[0] = toupper(s[0]);

        for (int i=1 , n=s.length(); i<n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}
