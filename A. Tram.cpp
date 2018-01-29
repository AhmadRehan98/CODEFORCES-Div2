#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,total;
    cin >> n;
    a = b = total = 0;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> a;
        cin >> b;
        total = total - a;
        total = total + b;
        arr[i] = total;
    }
    sort (arr, arr+n);
    cout << arr[n-1];
    return 0;
}
