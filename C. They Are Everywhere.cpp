#include <bits/stdc++.h>
using namespace std;

int main() {
    int ASCII[200];
    memset(ASCII,0, sizeof(ASCII));
    int n;
    string s;
    cin >> n >> s;
    int len = s.length(), chars=0;
    for (int i=0; i<len; i++){
        if (ASCII[s[i]] == 0){
            ASCII[s[i]] = 1;
            chars++;
        }
    }
    deque <char> DQ;
    map <char,int> freq;
    int min_length = 200000;
    for (int i=0; i<len; i++){
        DQ.push_back(s[i]);
        freq[s[i]]++;
        while (!DQ.empty() && freq.size() == chars){
            if (min_length > DQ.size())
                min_length = DQ.size();
            if (freq[DQ.front()] == 1)
                freq.erase(DQ.front());
            else
                freq[DQ.front()]--;
            DQ.erase(DQ.begin());
        }
    }
    cout << min_length;
}
