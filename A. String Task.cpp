#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i=0, n=s.length(); i<s.length(); i++)
    {
        s[i] = tolower (s[i]);
    }
    for (int i=0 , n=s.length(); i<n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            s.erase(i , 1);
            i--;
            n--;
        }
    }
    for (int i=0 , n=s.length()*2; i<n; i=i+2)
    {
        s.insert (i , ".");
    }
    cout << s;
    return 0;
}
