#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    int arrj[5];
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin >> arrj[j];
            if (arrj[j] == 1)
            {
                sum = abs(2 - j);
                sum = sum + abs(2 - i);
            }
        }
    }
    cout << sum;
    return 0;
}
