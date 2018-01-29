#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int counter = 0;
    for (int i=0; i<n; i++)
    {

        for (int j=0; j<m; j++)
        {
            if ((i+1)%4 == 0 && i>0)
                counter = 1;
            else if ((i+1)%2 == 0 && i> 0)
                counter = 0;
            if (i%2 == 0)
                cout << "#";
            if (i%2 != 0)
            {
                if (j == m-1 && counter == 0)
                {
                    cout << "#"; counter = 1;
                }
                else if (j == 0 && counter == 1)
                {
                    cout << "#"; counter = 0;
                }
                else cout << ".";
            }
        }

        cout << endl;
    }
    return 0;
}