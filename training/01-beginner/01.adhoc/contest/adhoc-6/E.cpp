#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, sum, mn, A[53];
    cin>> t;
    while(t--) {

        cin>> n;
        mn = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            mn = min(mn, A[i]);
        }
        sum = 0;
        for(int i = 0; i < n; i++) sum += (A[i] - mn);
        cout<< sum <<endl;
    }
    return 0;
}
