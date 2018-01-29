#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int rng = 0;
    int k = 5;
    if (n == 1)
    {
        cout << "Sheldon";
        return 0;
    }
    for (i=1; i<n; i++)
    {
        rng = rng + k;
        if (rng >= n)
        {
            rng = rng - k;
            break;
        }
        k = k*2;
    }
    int dup = 1;
    for (int j=1; j<i; j++)
    {
        dup = dup*2;
    }
    n = n - rng;
    int quant = (n-1) / dup;
    if (quant == 0) cout << "Sheldon";
    if (quant == 1) cout << "Leonard";
    if (quant == 2) cout << "Penny";
    if (quant == 3) cout << "Rajesh";
    if (quant == 4) cout << "Howard";
    return 0;
}
