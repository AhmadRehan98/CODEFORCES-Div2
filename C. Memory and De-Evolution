#include <bits/stdc++.h>
using namespace std;
multiset <int> setto;
int times;
void rec(int start){
    if (*setto.begin() == start) return;
    setto.erase(setto.begin());
    auto it = setto.begin();
    int n2 = *it;
    int n3 = *next(it);
    if (n2+n3-1 <= start)
        setto.insert(n2+n3-1);
    else setto.insert(start);
    times++;
    rec(start);
}

int main() {
    times = 0;
    int start,end;
    cin >> start >> end;
    for (int i=0; i<3; i++)
        setto.insert(end);
    rec(start);
    cout << times;
}
