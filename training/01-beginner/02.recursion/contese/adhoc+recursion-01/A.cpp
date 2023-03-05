#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, cn, i, A[5];
    cin>> t;
    while(t--) {
        for(i = 0; i < 4; i++) cin>> A[i];
        for(i = cn = 0; i < 4; i++) if(A[0] < A[i]) cn++;
        cout<< cn << endl;
    }
    return 0;
}
