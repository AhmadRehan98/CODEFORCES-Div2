#include <iostream>

using namespace std;

int main()
{
    int ja, ka, sum, total;
    ja = ka = sum = 0;
    string a, b, c;
    cin >> a >> b >> c;
    total = a.length() + b.length();
    for (int i=0; i<c.length(); i++)
    {
        for (int j=0; j<a.length(); j++)
        {
            if (c[i] == a[j])
            {
                sum = sum+1;
                i++;
                a.erase(j,1);
                j=-1;;
            }
        }
        for (int k=0; k<b.length(); k++)
        {
            if (c[i] == b[k])
            {
                sum = sum+1;
                b.erase(k,1);
                k=-1;
                break;
            }
        }
    }
    if (sum == total && total == c.length()) cout <<"YES";
    else cout <<"NO";
    return 0;
}
