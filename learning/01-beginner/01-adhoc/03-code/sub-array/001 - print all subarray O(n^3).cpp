#include<bits/stdc++.h>
using namespace std;


int main() {

    int i, j, k, n;
    int A[100003];
    cin>> n;

    for(i = 0; i < n; i++) cin>> A[i];

    /// sub-array: O(n^3)
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            for(k = i; k <=j;  k++) {
                cout<< A[k] << " ";
            }
            cout<< endl;
        }
    }
    return 0;
}
