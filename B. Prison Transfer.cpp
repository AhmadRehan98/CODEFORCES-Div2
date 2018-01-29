#include <iostream>
using namespace std;
int main() {
    int n,t,c,x, counter=0, ways=0;
    cin >> n >> t >> c;
    for (int i=0; i<n; i++){
        cin >> x;
        if (x <= t) counter++;
        else counter=0;
        if (counter >= c) ways++;
    }
    cout << ways;
    return 0;
}