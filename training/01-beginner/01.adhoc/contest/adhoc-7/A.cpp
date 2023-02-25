#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> MP;
    int t, n, elm, i;
    bool flg;

    cin>> t;
    while(t--) {
        flg = true;
        MP.clear();
        cin>> n;

        for(i = 1; i <= n; i++) {
            cin>> elm;
            MP[elm] += 1;
        }

        map<int,int>:: iterator itr;
        for(itr = MP.begin(); itr != MP.end(); itr++) {
            if(itr->second > 1) {
                flg = false;
            }
        }

        if(flg) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
