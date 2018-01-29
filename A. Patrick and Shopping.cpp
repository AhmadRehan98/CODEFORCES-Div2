#include <iostream>

using namespace std;

int main()
{
    int d1,d2,d3;
    cin >> d1 >> d2 >> d3;
    if (d1+d2+d3 >= (2*d1)+(2*d2))
    {
        cout << (2*d1)+(2*d2);
        return 0;
    }
    else if (d1+d2+d3 >= (2*d2)+(2*d3))
    {
      cout << (2*d2)+(2*d3);
      return 0;
    }

    else if (d1+d2+d3 >= (2*d1)+(2*d3))
    {
        cout << (2*d1)+(2*d3);
        return 0;
    }
    else if (d1+d2+d3 < (2*d1)+(2*d2))
    {
        if ((2*d3)+(2*d1) >= d2 || (2*d3)+(2*d2) >= d1)
        {
            if ((2*d3)+(2*d2) < d1)
            {
               cout << (2*d3)+(2*d2);
               return 0;
            }

            if ((2*d3)+(2*d1) < d2)
            {
                cout << (2*d3)+(2*d1);
                return 0;
            }

            else
            {
                cout << (d1+d2+d3);
                return 0;
            }
        }
        else if ((2*d3)+ (2*d1) < d2)
            cout << (2*d3)+(2*d1);
        else if ((2*d3)+(2*d2) < d1)
            cout << (2*d3)+(2*d2);
    }
    return 0;
}
