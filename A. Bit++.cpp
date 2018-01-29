#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int n, pos;
    string s;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        pos = s.find("+");
        if (pos != -1)
            x++;
        pos = s.find("-");
        if (pos != -1)
            x--;
    }
    cout << x;
    return 0;
}
