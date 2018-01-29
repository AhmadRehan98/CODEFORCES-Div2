#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    string s;
    cin >> s;
    for (int i=0; i<s.length()-1; i++)
    {
        if (s[i+1] == s[i])
        sum = sum+1;
        else sum=0;
        if (sum == 6)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
