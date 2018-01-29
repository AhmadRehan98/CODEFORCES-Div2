#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; int k, mul=1;
    pair <int,int> arr[26];
    cin >> s >> k;
    int n=s.length(), fun=0;
    for (int i=0; i<26; i++){
        arr[i].second =0;
        arr[i].first =0;
    }
    for (int i=0; i<26; i++){
        cin >> arr[i].first;
    }
    for (int i=0; i<n; i++){
        fun += arr[s[i] - 'a'].first * mul;
        mul++;
    }
    sort (arr,arr+26);
    for (; mul<=n+k; mul++){
        fun += arr[25].first * mul;
    }
    cout << fun;
    return 0;
}