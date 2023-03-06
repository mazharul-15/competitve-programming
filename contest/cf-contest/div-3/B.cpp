#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, k, i, cn, p, L[27], U[27];
    string s;

    cin>> t;

    while(t--) {
        //memset(L, 0, 27);
        //memset(U, 0, 27);
        for(i = 0; i < 26; i++) L[i] = U[i] = 0;
        cin>> n >> k >> s;

        for(i = 0; i < n; i++) {
            if(islower(s[i])) L[s[i]-97]++; // lower
            else U[s[i]-65]++; // upper
        }

        //for(i = 0; i < 26; i++) cout<<L[i] << " " << U[i] << endl;
        for(i = cn = 0; i < 26; i++) {
            cn += (min(L[i], U[i]));
            p = abs(L[i] - U[i]) / 2;

            if(p <= k) {
                cn += p;
                k -= p;
            }
            else {
                cn += k;
                k = 0;
            }
        }
        cout<< cn << endl;
        //s.clear();
    }
    return 0;
}
