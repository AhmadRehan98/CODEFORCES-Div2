#include <iostream>

using namespace std;

int main()
{
    int n, p, q, i, j, sum;
    sum = i = j = 0;
    cin >> n >> p;
    int arrx[p];
    for (int i = 0; i<p; i++)
    {
        cin >> arrx[i];
    }
    cin >> q;
    int arry[q];
    for (i = 0; i<q; i++)
    {
        cin >> arry[i];
    }
    if (n > p+q)
    {
        cout << "Oh, my keyboard!";
        return 0;
    }
    else
    {
        for (i=0; i<p; i++)
        {
            for (j=0; j<q; j++)
            {
                if (arrx[i] == arry[j])
                    sum = sum+1;
            }
        }
        if (sum != p+q-n)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }

    }
    cout << "I become the guy.";
    return 0;
}
