#include <iostream>

using namespace std;

int main()
{
    int n,t,sum,num;
    sum =1;
    cin >> n >> t;
    for (int i=1; i<n; i++)
    {
        cin >> num;
        if (i == sum)
        {
        sum = sum + num;
        }
        if (sum == t)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
