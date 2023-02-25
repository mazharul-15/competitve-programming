#include<bits/stdc++.h>
using namespace std;

int main() {

    int i, n, L, R, t, mx;
    string str;
    map<char, int> mp1, mp2;
    cin>> t;

    while(t--) {
        mp1.clear();
        mp2.clear();
        cin>> n >> str;

        /// processing
        for(i = 0; i < n; i++) mp1[str[i]] += 1;
        L = mp1.size(); R = 0;

        for(i = n-1, mx = 0; i >= 0; i--) {
            /// for R
            if(mp2[str[i]] == 0) {
                mp2[str[i]] += 1;
                R += 1;
            }
            else mp2[str[i]] += 1;

            /// for L
            if(mp1[str[i]] == 1) {
                mp1[str[i]] = 0;
                L -= 1;
            }
            else mp1[str[i]] -= 1;

            /// maximum
            mx = max(mx, L+R);
        }
        cout<< mx << endl;
    }
    return 0;
}
