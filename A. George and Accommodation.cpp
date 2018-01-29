#include <iostream>

using namespace std;

int main()
{
    int n,p,q;
    int sum = 0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> p >> q;
        if (q > p+1)
            sum++;
    }
    cout << sum;
    return 0;
}
