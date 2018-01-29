#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m, diff1, diff2, temp;
    diff1 = diff2 = 1;
    temp = 1005;
    cin >> n >> m;
    int arr[m];
    for (int i=0; i<m; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+m);
    if (n == m)
    {
        temp = arr[n-1] - arr[0];
    }
    for (int i=0; i<m-n; i++)
    {
        diff1 = arr[i+n-1] - arr[i];
        diff2 = arr[i+n] - arr[i+1];
        if (diff1 <= diff2 && diff1< temp)
        {
            temp = diff1;
        }
        if (diff2 < diff1 && diff2< temp)
        {
            temp = diff2;
        }
    }
    if (temp == 1005) temp =0;
    cout << temp;
    return 0;
}
