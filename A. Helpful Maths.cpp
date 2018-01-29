#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum1, sum2, sum3;
    int pos = sum1 = sum2 = sum3 = 0;
    string s, ss;
    cin >> s;
    for (int i=0, n=s.length(); i<n; i++)
    {
        int pos = s.find("+");
        if (pos != -1)
        {
            s.erase(pos,1);
        }
    }
    int n = s.length();
    for (int i=0; i<n; i++)
    {
        if (s[i] == '1')
            sum1 = sum1 + 1;
        if (s[i] == '2')
            sum2 = sum2 + 1;
        if (s[i] == '3')
            sum3 = sum3 + 1;
    }
    for (int i=0; i<sum1; i++)
    {
        ss = ss + '1';
    }
    for (int i=0; i<sum2; i++)
    {
        ss = ss + '2';
    }
    for (int i=0; i<sum3; i++)
    {
        ss = ss + '3';
    }
    for (int i=1; i<n*2-2; i=i+2)
    {
        ss.insert (i , "+");
    }
    cout << ss;
    return 0;
}

