#include <iostream>

using namespace std;

int main()
{
    int n,k, sum;
    sum =0;
    cin >> n >> k;
    for (int i=1; i<=n; i++)
    {
        sum++;
        if (i%k == 0)
        {
            n++;
        }
    }
    cout << sum;
    return 0;
}
