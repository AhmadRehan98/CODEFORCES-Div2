#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = (n-1)/2;
    int m = n;
    for (; n>0; n-- , k--)
    {
        int j = abs (k);
        int l = abs (k);
        int d = m-(j*2);
        for (; j>0 ; j--)
        {
            cout << "*";
        }
        for (; d>0 ; d--)
        {
            cout << "D";
        }
        for (; l>0 ; l--)
        {
            cout << "*";
        }
    cout << endl;
    }
    return 0;
}
