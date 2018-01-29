#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            for (int l=0; l<n; l++){
                if ( ( l != i && l!= j ) && ( arr[l] == arr[j] + arr[i] ) ){
                    cout << l+1 << " " << j+1 << " " << i+1;
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}