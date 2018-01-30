#include <bits/stdc++.h>
using namespace std;
long long eq(long long a, long long b, long long c){
    long long root = (b*b)-(4*a*c);
    if (root==0) return 0;
    else if (root < 0) return -1;
    long long sq_root = (int) sqrt(root);
    int digits = 0;
    long long i = (-b + sq_root)/(2*a);
    while (i>0){
        digits += i%10;
        i /= 10;
    }
    if (digits == b && sq_root*sq_root == root)
    return (-b + sq_root)/(2*a);
    else return -1;
}
int main() {
    long long n;
    int m;
    cin >> n;
    for (int sum=1; sum<=81; sum++){
        long long ans = eq(1,sum,-n);
        if (ans == 0){
            cout << 0;
            return 0;
        }
        else if (ans == -1) continue;
        else{
            cout << ans;
            return 0;
        }
    }
    cout << -1;
}
