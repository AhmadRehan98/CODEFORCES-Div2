#include <iostream>

using namespace std;

int main()
{
    string o1 , o2;
    cin>>o1>>o2;
    int s1,s2;
    int len = o1.length();
    for (int i = 0 ; i<len ; i++)
    {
        o1[i] = toupper(o1[i]);
        o2[i] = toupper(o2[i]);
    }
    for (int j = 0 ; j<len ; j++)
    {
        int v = o1[j] - o2[j];
        if (v > 0)
        {
            cout << 1;
            return 0;
        }
        if (v < 0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
