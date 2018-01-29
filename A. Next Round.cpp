#include <iostream>

using namespace std;

int main()
{
    int n, k, sum;
    sum = 0;
    cin >> n >> k;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    k = arr[k-1];
    for (int i=0; i<n; i++)
    {
        if (arr[i] >= k && arr[i] > 0)
            sum = sum+1;
    }
    cout << sum;
    return 0;
}
