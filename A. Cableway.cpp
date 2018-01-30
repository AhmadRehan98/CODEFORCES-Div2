#include <bits/stdc++.h>
using namespace std;
int main() {
    int r,g,b;
    cin >> r >> g >> b;
    int time_red=30,time_green = 31,time_blue = 32;
    int cars_red,cars_green,cars_blue;
    cars_red = (int) ceil(r/2.0);
    cars_green = (int) ceil(g/2.0);
    cars_blue = (int) ceil(b/2.0);

    time_red += 3*(cars_red-1);
    time_green += 3*(cars_green-1);
    time_blue +=  3*(cars_blue-1);
    int max = time_red;
    if (time_green > max) max = time_green;
    if (time_blue > max) max = time_blue;
    cout << max;
}
