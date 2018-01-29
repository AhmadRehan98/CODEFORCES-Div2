#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue <string> women;
    queue <string> men;
    queue <string> rat;
    string cpt ,s , status;
    for (int i=0; i<n; i++){
        cin >> s;
        cin >> status;
        if (status == "woman" || status == "child") women.push(s);
        else if (status == "rat") rat.push(s);
        else if (status == "man") men.push(s);
        else if (status == "captain") cpt = s;
    }
    while (rat.size()>0){
        cout << rat.front() << endl;
        rat.pop();
    }
    while (women.size()>0){
        cout << women.front() << endl;
        women.pop();
    }
    while (men.size()>0){
        cout << men.front() << endl;
        men.pop();
    }
    if (cpt.length() > 0){
        cout << cpt << endl;
    }
    return 0;
}