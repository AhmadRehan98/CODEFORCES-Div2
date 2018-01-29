#include <bits/stdc++.h>
using namespace std;
int main() {
    char c;
    int white=0, black=0;
    for (int i=0; i<64; i++){
        cin >> c;
        if (c == 'Q') white += 9;
        if (c == 'R') white += 5;
        if (c == 'B' || c == 'N') white +=3;
        if (c == 'P') white += 1;
        if (c == 'q') black += 9;
        if (c == 'r') black += 5;
        if (c == 'b' || c == 'n') black +=3;
        if (c == 'p') black += 1;
    }
    if (white > black) cout << "White";
    else if (black == white) cout << "Draw";
    else cout << "Black";
    return 0;
}