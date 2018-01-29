#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    sum = 0;
    cin>>n;
    string s;
    cin>>s;
    if (n==1)
    {
        cout <<0;
        return 0;
    }
    for (int i=0; i<n-1; i++)
    {
        if (s[i+1] == s[i])
        {
            sum = sum + 1;
        }
    }
    cout <<sum;
    return 0;
}
