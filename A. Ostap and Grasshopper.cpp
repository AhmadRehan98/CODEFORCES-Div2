#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum,sum2;
    cin>>n>>k;
    string s;
    cin>>s;
    int pos = s.find("G");
    sum = sum2 = 0;
    for (int i=pos; i<n; i=i+k)
    {
        if (s[i] == '#')
        {
            sum = 1;
        }
        if (s[i] == 'T')
        {
            if (sum == 1)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                cout << "YES";
                return 0;
            }
        }
    }
    for (int j=pos; j>=0; j=j-k)
    {
        if (s[j] == '#')
        {
            sum2 = 1;
        }
        if (s[j] == 'T')
        {
            if (sum2 == 1)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                cout << "YES";
                return 0;
            }
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
