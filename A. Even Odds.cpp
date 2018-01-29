#include <iostream>

using namespace std;

int main()
{
    long long n,k,num;
    cin >> n;
    cin >> k;
    long long even = n/2;
    long long odd = n - even;
    if (k<=odd)
    {
        num = k+k-1;
    }
    if (k>odd)
    {
        k = k - odd;
        num =k + k;
    }
    cout << num;
    return 0;
}
