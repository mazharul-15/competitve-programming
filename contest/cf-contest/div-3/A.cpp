#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, i, j, id, cn, f;
    string str, str2;
    str2 = "meow";

    cin>> t;

    while(t--) {
        cin>> n >> str;

        for(i = cn = id = 0; str2[i]; i++) {
            f = 0;
            for(j = id; str[j]; j++) {
                if(str2[i] == str[j]) f = 1;
                else {
                    id = j;
                    break;
                }
            }

            if(f) cn++;
        }
        if(cn == 4) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
