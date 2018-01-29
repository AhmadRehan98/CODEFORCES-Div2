#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >>n;
    long long even = n/2;
    long long odd = n-even;
    long long sum = 0;
    sum = -(odd*odd) + (even*even)+ even;
    cout << sum;
}
