#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    sum=0;
    string pan;
    cin >> n;
    cin >> pan;
    for (int i=0; i<pan.length(); i++)
    {
        pan [i] = toupper(pan[i]);
    }
    for (int k = 'A'; k <= 'Z'; k++)
    {
        for (int j=0; j<pan.length(); j++)
        {
            if (pan[j] == k)
            {
                sum = sum + 1;
                break;
            }
        }
    }
    if (sum == 26) cout << "YES";
    else cout << "NO";
    return 0;
}
