#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int i = 0;
        cin >> i;
        if  (i == 4)
        {
            sum = sum + 1;
        }
        if (i == 3)
        {
            sum3 = sum3 + 1;
        }
        if (i == 2)
        {
            sum2 = sum2 + 1;
        }
        if (i == 1)
        {
            sum1 = sum1 + 1;
        }
    }
    if (sum1 > sum3)
    {
        sum1 = sum1 - sum3;
        sum = sum + sum3;
        sum = sum + sum1/4;
        if (sum1%4 != 0)
        {
            if (sum2%2 == 1)
            {
                sum1 = sum1%4 + sum2*2;
                sum = sum + (sum1/4);
                if (sum1%4 != 0)
                {
                    sum = sum + 1;
                }
            }
            else if (sum2%2 == 0)
            {
                sum2 = sum2/2;
                sum = sum + sum2;
                sum = sum + 1;
                sum1 = 0;
            }
        }
        else
        {
            if (sum2 != 0)
            {
               sum = sum + (sum2-1)/2 + 1;
            }
        }
    }
    else if (sum3 > sum1)
    {
        sum3 = sum3 - sum1;
            if (sum2 == 0)
            {
                sum2 = -1;
            }
        sum2 = (sum2 - 1)/2;
        sum = sum + sum1 + sum3 + sum2 + 1;
    }
    else if (sum1 == sum3)
    {
        sum = sum + sum1;
        sum = sum + (sum2+1)/2;
    }
    cout << sum;
    return 0;
}
