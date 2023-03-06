#include<bits/stdc++.h>
using namespace std;


int main() {

    string s1, s2;
    int t, n, i;
    cin>> t;
    while(t--) {
        cin>>n >> s1 >> s2;
        for(i = 0; i < n; i++) {
            if(s1[i] == 'B') s1[i] = 'G';
            if(s2[i] == 'B') s2[i] = 'G';
        }
        if(s1.find(s2) == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
