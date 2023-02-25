#include<bits/stdc++.h>
using namespace std;

int main() {

    int i, j, k, n, sum;
    int A[100005];

    cin>> n;
    for(i = 0; i < n; i++) cin>> A[i];

    /// sub-array sum: O(n^3)
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            sum = 0;
            for(k = i; k <= j; k++) {
                sum += A[k];
            }
            cout<< sum << " ";
        }
        cout<< endl;
    }
    return 0;
}
