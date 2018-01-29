#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 1;
    int total = 0;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<n-1; i++)
    {
        if (a[i+1] >= a[i])
            sum = sum + 1;
        else if (a[i+1] < a[i])
        {
            if (total < sum && sum != 1)
            {
                total = sum;
            }
        sum = 1;
        }
    }
    if (total >= sum)
    cout << total;
    if (sum > total )
    cout << sum;
    return 0;
}
