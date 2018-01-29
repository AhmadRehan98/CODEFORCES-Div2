#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[4];
    for (; x<9999;)
    {
        x++;
        int y = x;
        for (int i=3; i>=0; i--)
        {
            arr[i] = y%10;
            y = y/10;
        }
        if (arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3] && arr[1] != arr[2] && arr[1] != arr[3] && arr[2] != arr[3])
        {
            cout << x;
            return 0;
        }
    }
    return 0;
}
