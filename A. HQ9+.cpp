#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int pos1 = s.find("H");
    int pos2 = s.find("Q");
    int pos3 = s.find("9");
    if (pos1 != -1 || pos2 != -1 || pos3 != -1)
    {
       cout << "YES";
       return 0;
    }

    cout << "NO";
    return 0;
}
