#include <iostream>
using namespace std;
int main() {
    int n,v, items, price, sum=0, index_of_answers=0;
    cin >> n >> v;
    int answers[n];
    for (int i=0; i<n; i++){
        bool is = true;
        cin >> items;
        for (int j=0; j<items; j++){
            cin >> price;
            if (v > price && is){
                is = false;
                sum++;
                answers[index_of_answers] = i+1;
                index_of_answers++;
            }
        }
    }
    cout << sum << endl;
    for (int i=0; i<sum; i++){
        cout << answers[i] << " ";
    }
    return 0;
}