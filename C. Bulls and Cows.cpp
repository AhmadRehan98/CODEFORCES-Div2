#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, answers=0, temp_answer[4];
    cin >> n;
    int num[n], cows[n] , bulls[n];
    for (int i=0; i<n; i++){
        cin >> num[i] >> bulls[i] >> cows[i];
    }
    for (int i=0; i<=9; i++){
        for (int j=0; j<=9; j++){
            if (i == j) continue;
            for (int k=0; k<=9; k++){
                if (k == i || k == j) continue;
                for (int l=0; l<=9; l++){
                    if (l == i || l == j || l == k) continue;
                    int applies_to_all =0;
                    for (int a=0; a<n; a++){
                        int temp_bulls=0, temp_cows=0, temp_num[4];
                        temp_num[3]= num[a]%10;    temp_num[2]= (num[a]/10)%10;
                        temp_num[1]= (num[a]/100)%10;   temp_num[0]= (num[a]/1000)%10;
                        if (temp_num[0] == i) temp_bulls++;
                        else if (temp_num[0] == j || temp_num[0] == k || temp_num[0] == l) temp_cows++;
                        if (temp_num[1] == j) temp_bulls++;
                        else if (temp_num[1] == i || temp_num[1] == k || temp_num[1] == l) temp_cows++;
                        if (temp_num[2] == k) temp_bulls++;
                        else if (temp_num[2] == i || temp_num[2] == j || temp_num[2] == l) temp_cows++;
                        if (temp_num[3] == l) temp_bulls++;
                        else if (temp_num[3] == i || temp_num[3] == j || temp_num[3] == k) temp_cows++;
                        if (temp_bulls == bulls[a] && temp_cows == cows[a]){
                            applies_to_all++;
                        }
                    }
                    if (applies_to_all == n){
                        answers++;
                        temp_answer[0] =i;
                        temp_answer[1] =j;
                        temp_answer[2] =k;
                        temp_answer[3] =l;
                    }
                }
            }
        }
    }
    if (answers == 1) {
        for (int i=0; i<4; i++) {
            cout << temp_answer[i];
        }
    }
    else if (answers > 1) cout << "Need more data";
    else if (answers < 1) cout << "Incorrect data";
    return 0;
}