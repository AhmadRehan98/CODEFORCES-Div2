#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w == 2)
    {
        cout << "NO";
        return 0;
    }
    for (int i=2; i<=w; i=i+2)
{
    if (w == i)
    {
        cout << "YES";
        return 0;
    }
}
    cout << "NO";
    return 0;
}
