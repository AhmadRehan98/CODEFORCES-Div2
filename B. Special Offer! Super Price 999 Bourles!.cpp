#include <bits/stdc++.h>
using namespace std;

int check (long long n){
    int nines = 0;
    while (n > 0){
        if (n%10 == 9) nines++;
        else return nines;
        n /= 10;
    }
    return nines;
}

int main() {
    bool flag = false;
    long long d,p;
    cin >> p >> d;
    long long roof = p, ground = p-d;
    long long max = ground;
    int nines = check (ground);
    long long m=1;
    while (true){
        while ((ground%(m*10))/m != 9 && ground <= roof) {
            //int mod = (ground%(m*10))/m;
            ground+= m;
        }
        if (ground > roof){
            ground -= m;
            flag = true;
        }
        m *= 10;
        int temp = check(ground);
        if (temp >= nines) {
            max = ground;
            nines = temp;
        }
        if (flag) break;
    }
    cout << max;
}
