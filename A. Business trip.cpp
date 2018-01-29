#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0;
    int k;
    int month[12];
    cin >> k;
    for (int i=0; i<12; i++)
    {
        cin >> month[i];
    }
    if (k == 0)
    {
        cout << 0;
        return 0;
    }
    sort (month , month+12);
    reverse (month, month+12);
    for (int i=0; i<12; i++)
    {
        sum = sum + month[i];
        if (sum >= k)
        {
            cout << i + 1;
            return 0;
        }
    }
    if (sum < k)
    cout << -1;
    return 0;
}
