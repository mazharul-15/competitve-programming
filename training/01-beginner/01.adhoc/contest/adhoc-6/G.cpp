#include<bits/stdc++.h>
using namespace std;

#define sz 200003

int main() {

    int t, n, elm, A[sz], B[sz];
    cin>> t;
    while(t--) {
        memset(A, 0, sz);
        bool flag = false;
        cin>> n;
        for(int i = 0; i < n; i++) {
            cin>> B[i];
            A[B[i]]++;
        }
        for(int i = 0; i < n; i++) {
            if(A[B[i]] >= 3) {
                elm = B[i];
                flag = true;
                break;
            }
        }
        if(flag) cout<< elm <<endl;
        else cout<< "-1" <<endl;
    }
    return 0;
}
