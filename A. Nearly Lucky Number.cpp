#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    string ss;
    long long sum;
    cin >> s;
    for (long long i=0; i<s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            ss = ss+ s[i];
        }
    }
    long long len = 0;
    if (ss.length() < 10)
    {
        len = 1;
    }
    else
    {
        len = ss.length()/10;
    }
    long long len2 = ss.length();
    long long arr[len];
    for (long long i=len-1; i >= 0; i--)
    {
        arr[i] = len2% 10;
        len2 /= 10;
    }
    for (long long i=0; i<len; i++)
    {
        if (arr[i]==0 || arr[i]==1 || arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==6 || arr[i]==8 || arr[i]==9)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
