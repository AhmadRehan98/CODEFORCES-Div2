#include <iostream>

using namespace std;

int main()
{
    int pos1, pos2 ,pos3, pos4, pos5;
    string s;
    cin >> s;
    pos1 = s.find("h");
    s.erase(0,pos1+1);
    pos2 = s.find("e");
    s.erase(0,pos2+1);
    pos3 = s.find("l");
    s.erase(0,pos3+1);
    pos4 = s.find ("l");
    s.erase(0,pos4+1);
    pos5 = s.find ("o");
    s.erase(0,pos5+1);
    if (pos1 != -1 && pos2 != -1 && pos3 != -1 && pos4 != -1 && pos5 != -1)
        cout << "YES";
    else cout << "NO";
    return 0;
}
