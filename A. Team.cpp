#include <iostream>

using namespace std;

int main()
{
    int n, p, sum1, sum;
    sum1 = sum = 0;
    cin >> n;
    for (int j=0; j<n; j++)
    {
        for (int i=0; i<3; i++)
        {
            cin >> p;
            if (p == 1)
                sum1 = sum1 + 1;
        }
        if (sum1 >= 2) sum = sum+1;
        sum1 = 0;
    }
    cout << sum;
    return 0;
}
