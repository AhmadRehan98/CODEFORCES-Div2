#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool arr[n];
    memset(arr,0,sizeof(arr));
    int index = 0; int trues=0;
    for (int i=1; i<=n; i++){
        if (arr[index] == 0){
            trues++;
            arr[index] = 1;
        }
        index = (index + i)%n;
    }
    if (trues == n) cout << "YES";
    else cout << "NO";
}
