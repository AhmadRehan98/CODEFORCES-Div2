#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int sum = 0;
    cin >> n >> m;
    for (int i=1; i<=n; i++)
    {
        sum++;
        if (i%m == 0)
        {
            n++;
        }
    }
    cout << sum;
    return 0;

}
