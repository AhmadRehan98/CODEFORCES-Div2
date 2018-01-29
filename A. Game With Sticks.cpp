#include <iostream>

using namespace std;

int main()
{
    int n,m, limit;
    cin >> n >> m;
    int intsec = n*m;
    if (n>=m) limit = m;
    if (m>n) limit = n;
    if (limit%2 == 0)    cout << "Malvika";
    else    cout << "Akshat";
    return 0;
}
