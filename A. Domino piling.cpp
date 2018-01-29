#include <iostream>

using namespace std;

int main()
{
    int M , N;
    cin >> M >> N;
    int Z = (M*N);
    if (Z%2 != 0)
    {
        int Z = Z - 1;
    }
    cout << Z/2;
    return 0;
}



    if (sum3 == 0)
    {
        sum1 = sum1 + sum2*2;
        sum = sum + sum1/4;
        if (sum1%4 != 0)
        {
            sum = sum + 1;
        }
    }
