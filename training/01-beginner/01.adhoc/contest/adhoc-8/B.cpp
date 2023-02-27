#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, i, A[55];
    string str;
    map<int, char> mp;

    cin>> t;

    while(t--) {
        mp.clear();

        cin>> n;
        for(i = 0; i < n; i++) cin>> A[i];
        cin>> str;

        bool flag = false;
        for(i = 0; i < n; i++) {
            if(mp[A[i]] != NULL && mp[A[i]] != str[i]) {
                flag = true;
                break;
            }
            else mp[A[i]] = str[i];
        }

        if(flag) cout<< "NO\n";
        else cout<< "YES\n";
    }
    return 0;
}
