#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a, width, height;
    width = height = 0;
    cin >> n >> m >> a;
    if (n%a != 0)
        width = n/a + 1;
    else width = n/a;
    if (m%a != 0)
        height = m/a + 1;
    else height = m/a;
    cout << width*height;
    return 0;
}
