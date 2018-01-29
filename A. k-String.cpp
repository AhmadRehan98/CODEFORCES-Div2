#include <iostream>
using namespace std;
int main() {
    int k;
    int chr[26];
    // # characters are duplicated
    int rept[26];
    // # characters to be printed
    fill(chr, chr+26, 0);
    fill(rept, rept+26, 0);
    cin >> k;
    string s;
    cin >> s;
    int n = s.length();
    for (int i=0; i<n; i++){
        int index = s[i] -'a';
        chr[index] += 1;
    }
    for (int i=0; i<26; i++){
        if (chr[i] % k == 0) {
            rept[i] = chr[i] / k;
        }
        else {
            cout << -1;
            return 0;
        }
    }
    for (int a=0; a<k; a++) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < rept[i]; j++) {
                char c = i + 'a';
                cout << c;
            }
        }
    }
}