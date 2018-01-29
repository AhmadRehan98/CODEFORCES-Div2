#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cin >> n;
    int k = n/3;
    sum = k*2;
    if (n%3 != 0) sum += 1;
    cout << sum;
    return 0;
}