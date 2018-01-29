#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector <int> vec;
    int check = 0;
    getline(cin,s);
    for (int i=0; i<1001; i++)
    {
        if (s[i] == '}' ) break;
        if (s[i] != '{' && s[i] != ',' && s[i] != ' ')
            {
                for (int j=0; j<vec.size(); j++)
                {
                    if (vec[j] == s[i])
                        check++;
                }
            }
        if (check == 0)
            vec.push_back(s[i]);
        if (check != 0)
            check = 0;
    }
    cout << vec.size();

}
