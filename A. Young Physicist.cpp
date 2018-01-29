#include <iostream>

using namespace std;

int main()
{
    int n;
    int tx,ty,tz;
    tx = ty = tz = 0;
    cin >> n;
    int arrx[n], arry[n], arrz[n];
    for (int i=0; i<n; i++)
    {
        cin >> arrx[i] >> arry[i] >> arrz[i];
    }
    for (int i=0; i<n; i++)
    {
        tx = tx + arrx[i];
        ty = ty + arry[i];
        tz = tz + arrz[i];
    }
    if (tx == 0 && ty == 0 && tz == 0)
        cout << "YES";
    else cout << "NO";
    return 0;
}
