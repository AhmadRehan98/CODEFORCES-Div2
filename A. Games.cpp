#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    int arr_h[n] , arr_a[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr_h[i] >> arr_a[i];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr_h[i] == arr_a[j])
            {
                sum++;
                cout << i << " " << j << endl;
            }
        }
    }
    cout << sum;
    return 0;
}
