#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    set <string> setto;
    while (getline(cin,s)){
    int n = s.length();
        string temp;
        for (int i=0; i<n; i++){
            if ((s[i] < 'A' || s[i] > 'Z')  && (s[i] < 'a' || s[i] > 'z')) {
                if (s[i] == ' '){
                    if (temp.length() > 0)
                        setto.insert(temp);
                    temp.clear();
                    continue;
                }
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                temp += tolower(s[i]);
            }
            else if (s[i] >= 'a' && s[i] <= 'z'){
                temp += s[i];
            }
        }
        if (temp.length() > 0){
            setto.insert(temp);
            temp.clear();
        }
        break;
    }
    while (!setto.empty()){
        cout << *setto.begin() << endl;
        setto.erase(setto.begin());
    }
    return 0;
}