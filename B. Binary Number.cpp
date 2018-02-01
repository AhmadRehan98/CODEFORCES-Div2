#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    bool flag = false;
    int moves=0;
    while (s.length() > 1){
        if (s[s.length()-1] == '1') {
            moves+=2;
            s.erase(s.length()-1);
            while (s[s.length()-1] == '1'){
                if (s.length() == 1){
                    flag = true;
                }
                s.erase(s.length()-1);
                moves++;
            }
            if (flag) break;
            s[s.length()-1] = '1';
        }
        else{
            if (flag) break;
            s.erase(s.length()-1);
            moves++;
        }
    }
    cout << moves;
}
