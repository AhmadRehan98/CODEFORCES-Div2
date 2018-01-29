#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int pos = -1;
    int neg = -1;
    string chr;
    for (int i=0; i<s.length(); i++)
    {
        for (int j=0; j<s.length(); j++)
        {
            if (s[i] == s[j] && i != j)
            {
                neg = 1;
                chr = s[i];
            }
        }
        if (neg == 1)
        {
            for (int k=0; k<s.length(); k++)
            {
                int pos = s.find(chr);
                if (pos >= 0)
                {
                    s.erase(pos,1);
                    pos = -1;
                }
            }
            neg = 0;
            s.insert(0,chr);
        }
    }
    if (s.length()%2 == 0)
        cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
