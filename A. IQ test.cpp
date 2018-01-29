#include <bits/stdc++.h>

using namespace std;
int main() {
    int odd=0;
    int even=0;
    int odd_index, even_index, n, input, arr[100];
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> input;
        arr[i] = input;
        if (arr[i] %2 == 0)
        {
            even++;
            even_index = i+1;
        }
        if (arr[i]%2 != 0)
        {
            odd++;
            odd_index = i+1;
        }
    }
    if (even == 1) cout << even_index;
    if (odd == 1) cout << odd_index;
    return 0;
}