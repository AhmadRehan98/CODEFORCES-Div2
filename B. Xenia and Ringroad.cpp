#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    long long timer = 0;
    cin >> n >> m;
    int arr[m];
    for (int i=0; i<m; i++)
    {
        cin >> arr[i];
        if (i>0)
        {
            if (arr[i-1] > arr[i])
            {
                timer = timer + ( n - (arr[i-1] - arr[i]) );
            }
            if (arr[i-1] < arr[i])
            {
                timer = timer + arr[i] - arr[i-1];
            }
        }
    }
    timer = timer + arr[0] - 1;
    cout << timer;
    return 0;
}