#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i=1; i<200003; i++)
    {
        x = x-5;
        if (x<=0)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}
