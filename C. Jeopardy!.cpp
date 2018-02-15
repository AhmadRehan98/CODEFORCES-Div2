#include <bits/stdc++.h>
using namespace std;

bool comp (int i, int j){ return (j<i); }

int main() {
    int n,m, TEMP;
    cin >> n >> m;
    int temp[m];
    vector <int> non_auction (n);
    vector <int> auction (m);
    for (int i=0; i<n; i++){
        cin >> TEMP;
        non_auction[i] = TEMP;
    }
    for (int i=0; i<m; i++)
        cin>> temp[i];
    sort(temp, temp+m);
    for (int i=0; i<m; i++){
        auction[i] = non_auction[temp[i]-1-i];
        non_auction.erase(non_auction.begin() + temp[i]-1-i);
    }
    sort (non_auction.begin(), non_auction.end());
    sort (auction.begin(), auction.end(), comp);
    long long points=0;
    for (int i=0; i<n-m; i++)
        points += non_auction[i];
    for (int i=0; i<m; i++){
        if (points >= auction[i])
            points *= 2;
        else
            points +=  auction[i];
    }
    cout << points;
}
