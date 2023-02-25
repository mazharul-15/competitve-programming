#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, i, j, best, sum, A[100005];
    cin>> n;
    for(i = 0; i < n; i++) cin>> A[i];

    /// max sum of all sub-array
    for(i = best = 0; i < n; i++) {
        sum = 0;
        for(j = i; j < n; j++) {
            sum += A[j];
            best = max(best, sum);
        }
    }

    cout<< best <<endl;
    return 0;
}
