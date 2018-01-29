#include <bits/stdc++.h>
using namespace std;
char arr[500][500];
int n,m, r1, c1 ,r2, c2;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
bool termin=0;
bool valid (int r, int c){
    if (r < 0 || r >= n || c < 0 || c >= m) return 0;
    if (r == r2 && c == c2 && arr[r][c] == 'X') termin=1;
    if (arr[r][c] == 'X') return 0;
    return 1;
}
void trv (int r, int c){
    for (int i=0; i<4; i++){
        if (termin) return;
        if (!valid(r+dx[i],c+dy[i])) continue;
        arr[r+dx[i]][c+dy[i]] = 'X';
        trv(r+dx[i], c+dy[i]);
    }
    return;
}
int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cin >> r1 >> c1 >> r2 >> c2;
    r1 --; c1 --; r2 --; c2 --;
    arr[r1][c1] = 'X';
    trv(r1, c1);
    if (termin) cout << "YES";
    else cout << "NO";
    return 0;
}