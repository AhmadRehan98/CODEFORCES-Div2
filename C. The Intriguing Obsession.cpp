#include <bits/stdc++.h>
using namespace std;
long long per[3][5001];
long long com[5001][5001];
const int m = 998244353;
void fill_arr(int max, int mid, int min){
    //Permutations
    //max = 2 , mid = 1, min = 0
    per[2][0] = per[1][0] = 1;
    for(int i=1;i<=max;i++){
        per[2][i] = ( (per[2][i-1]%m) * ((max-i+1)%m) );
        per[1][i] = ( (per[1][i-1]%m) * ((mid-i+1)%m) );
        //per[0][i] = per[0][i-1]*min-i+1;
    }
    //Combinations
    for (int i=0; i<=max; i++){
        com[i][0] = 1;
        com[i][i] = 1;
    }
    for(int i=1; i<=max; i++){
        for (int j=1; j<=i; j++)
            com[i][j] = (com[i-1][j]%m + com[i-1][j-1]%m)%m;
    }
}
int main() {
    int a,b,c, max,mid,min; long long temp1=0, temp2=0, temp3=0;
    cin >> a >> b >> c;
    if (a>=b && b>=c)   max=a,mid=b,min=c;
    else if (a>=c && c>=b)   max=a,mid=c,min=b;
    else if (a>=b && c>=a)   max=c,mid=a,min=b;
    else if (c>=b && b>=a)   max=c,mid=b,min=a;
    else if (b>=a && a>=c)   max=b,mid=a,min=c;
    else if (b>=c && c>=a)   max=b,mid=c,min=a;
    fill_arr(max,mid,min);
    for (int i=min; i>=0; i--){
        temp1 = ((temp1) +  ((com[min][i]%m) * (per[1][i]%m) %m))%m;
        temp2 = ((temp2) +  ((com[min][i]%m) * (per[2][i]%m) %m))%m;
    }
    for (int i=mid; i>=0; i--)
        temp3 = ((temp3) +  ((com[mid][i]%m) * (per[2][i]%m) %m))%m;
    cout << (((temp1*temp2)%m) * temp3)%m;
}