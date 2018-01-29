#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 1;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<n-1; i++)
    {
        if (arr[i+1] != arr[i])
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}
