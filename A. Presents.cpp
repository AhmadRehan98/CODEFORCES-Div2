#include <iostream>

using namespace std;

int main()
{
    int n,j;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> j;
        arr[j-1] = i+1;
    }
    for (int i=0; i<n-1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[n-1];
    return 0;
}
