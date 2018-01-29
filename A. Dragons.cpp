#include <bits/stdc++.h>
using namespace std;
int main() {
    long long s, n, counter;
    vector<int> vec;
    counter = 0;
    cin >> s >> n;
    int arr[n][2];
    for (int j=0; j<n; j++) {
        cin >> arr[j][0];
        cin >> arr[j][1];
    }
    for (int j=0; j<(n*2)+1; j++)
    {
        for (int i=0; i<n; i++)
        {
            if (arr[i][0] < s && arr[i][0] != 0) {
                vec.push_back(arr[i][1]);
                arr[i][0] = 0;
                counter++;
            }
        }
        for (int k=0; k<vec.size(); k++)
        {
            s = s + vec[k];
        }
        vec.clear();
        if (counter == n) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}