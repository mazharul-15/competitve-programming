#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, i, A[100005];
    int sum, best;
    cin>> t;
    while(t--) {
        cin>> n;
        for(i = 0; i < n; i++) cin>> A[i];
        sum = best = 0;

        for(i = 0; i < n; i++) {
            sum = max(sum + A[i], A[i]);
            best = max(best, sum);
        }
        cout<< best << endl;
    }
    return 0;
}
