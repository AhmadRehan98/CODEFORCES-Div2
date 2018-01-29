#include <iostream>
using namespace std;
long long cum_sum;
long long binarysearch (long long k, long long n){
    long long start = 2;
    long long end = k;
    while (start < end){
        int counter=0;
        long long mid = start + (end - start+1)/2;
        cum_sum = (k*(k-1))/2 + 1 ;
        cum_sum = cum_sum - ((mid*(mid-1))/2 +1);
        if (cum_sum > n)
            start = mid;
        else if (cum_sum < n)
            end = mid-1;
        else start++;
    }
    return start;
}
int main() {
    long long n,k;
    cin >> n >> k;
    if (n==1){
        cout << 0;
        return 0;
    }
    long long biggest_sum = (k*(k-1))/2 + 1;
    if (k >= n) {
        cout << 1;
        return 0;
    }
    if ( (k*(k-1))/2 + 1 < n ) {
        cout << -1;
        return 0;
    }
    if (biggest_sum == n) {
        cout << k-1 ;
        return 0;
    }
    long long answer = binarysearch (k , n);
        cout << k - answer ;
    return 0;
}