#include <iostream>
using namespace std;
int main() {
    int a,b,n, min1, min2, max1, max2,turn;
    cin >> a >> b >> n;
    turn =0;
    while (n !=0)
    {
        min1 = min(a,n);
        max1 = max(a,n);
        for (int i=min1; i>0; i--)
        {
            if (max1%i == 0 && min1%i == 0)
            {
                n -= i;
                turn++;
                break;
            }
        }
        min2 = min(b,n);
        max2 = max(b,n);
        for (int i=min2; i>0; i--)
        {

            if (max2%i == 0 && min2%i == 0)
            {
                n -= i;
                turn++;
                break;
            }
        }
    }
    if (turn%2 == 0)
    {
        cout << "1";
    }
    if (turn%2 == 1)
    {
        cout << "0";
    }
    return 0;
}