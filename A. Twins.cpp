#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    int share=0;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    sort (arr,arr+n);
    reverse (arr,arr+n);
    for (int i=0; i<n; i++)
    {
        share = share + arr[i];
        if (share > sum/2.0)
        {
            cout << i+1;
            return 0;
        }
    }
    return 0;
}
