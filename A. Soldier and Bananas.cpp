#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    int sum = 0;
    cin >> k >> n >> w;
    for (int i=0; i<w; i++)
    {
        sum = sum + (i+1)*k;
    }
    if (n > sum)
    {
        cout << 0;
        return 0;
    }
    sum = sum - n;
    cout << sum;
    return 0;
}
