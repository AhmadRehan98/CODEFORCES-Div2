#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,temp1,temp2;
    cin >> n >> m;
    map <int, set<int>> mappie;
    int arr[n];
    bool used[100005] = {0};
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (!used[arr[i]])
            mappie[arr[i]].insert(-1);
        used[arr[i]]=true;
    }
    for (int i=0; i<m; i++){
        cin >> temp1 >> temp2;
        if (arr[temp1-1] == arr[temp2-1]) continue;
        mappie[arr[temp1-1]].insert(arr[temp2-1]);
        mappie[arr[temp2-1]].insert(arr[temp1-1]);
    }
    int mx = mappie.begin()->second.size(), color = mappie.begin()->first;
    for (auto it = mappie.begin(); it != mappie.end(); it++){
        if (it->second.size() > mx)
        {
            mx = it->second.size();
            color = it->first;
        }
    }
    cout << color;
}
