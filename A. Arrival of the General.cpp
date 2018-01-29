#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, warn, waarn;
    warn = waarn = 0;
    cin >> n;
    int arr[n] , ordered[n] , reversed[n];
    int maxi, mini, steps;
    maxi = mini = 0;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        ordered[i] = arr[i];
        reversed[i] = arr[i];
    }
    sort(ordered,ordered+n);
    reverse(reversed,reversed+n);
    for (int j=0; j<n; j++)
    {
        if (reversed[j] == ordered[0] && waarn != 1)
        {
            mini = n-j-1;
            waarn = 1;
        }

        if (arr[j] == ordered[n-1] && warn != 1)
        {
            maxi = j;
            warn = 1;
        }

    }
    if (mini > maxi)
        steps = maxi + n - 1 - mini;
    if (maxi > mini)
        steps = maxi + n - 2 - mini;
    cout << steps;
    return 0;
}
