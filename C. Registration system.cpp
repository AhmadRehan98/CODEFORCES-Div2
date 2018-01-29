#include <bits/stdc++.h>
using namespace std;
int main() {
    map <string, int> mappie;
    int n;
    cin >> n;
    string s;
    for (int i=0; i<n; i++){
        cin >> s;
        mappie[s] += 1;
        if (mappie[s] == 1) cout << "OK" << endl;
        else cout << s << mappie[s]-1 << endl;
    }
    return 0;
}