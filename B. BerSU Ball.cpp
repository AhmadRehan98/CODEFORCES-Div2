#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m, counter=0;
    cin >> n;
    int arr[100];
    vector <int> v;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i=0; i<n; i++){
        v.push_back(arr[i]);
    }
    cin >> m;
    fill(arr, arr+100, 200);
    for (int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr,arr+m);
    for (int i=0; i<m; i++){
        for (int j=0; j<v.size(); j++){
            if (arr[i] == v[j] + 1) {
                counter++;
                v.erase(v.begin() ,v.begin()+j+1);
                break;
            }
            else if (arr[i] == v[j]) {
                counter++;
                v.erase(v.begin() ,v.begin()+j+1);
                break;
            }
            else if (arr[i] == v[j] - 1){
                counter++;
                v.erase(v.begin() ,v.begin()+j+1);
                break;
            }
        }
    }
    cout << counter;
    return 0;
}