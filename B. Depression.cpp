#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int min, hour;
    hour = stoi(s.substr(0,2));
    min = stoi(s.substr(3));
    if (hour>=12) hour -= 12;
    double pos_hour = (hour*30)+(0.5*min);
    printf("%f %i", pos_hour, min*6);
}
