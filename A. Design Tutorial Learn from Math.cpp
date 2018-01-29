#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = n/2;
    int k = n - j;
    int s_j = 0;
    int s_k = 0;
    for (int b=2; b<n/2 + 3; b++)
    {
    for (int a=2; a<n/2 + 3; a++)
    {
        if (j%a == 0 && a<j)
        {
            s_j = j;
        }
        if (k%a == 0 && a<k)
        {
            s_k = k;
        }
        if (s_j != 0 && s_k != 0)
        {
            cout << s_j << " " << s_k;
            return 0;
        }
    }
    s_j = s_k = 0;
    j--;
    k++;
    }



    return 0;
}
