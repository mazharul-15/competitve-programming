#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, i, L, R;
    cin>> t;

    while(t--) {
        cin>> n;
        if(n == 3) cout<< "-1";
        else if(n%2) {
            L = n / 2;
            R = L + 1;
            for(i = 1; i <= L; i++) cout<< n-- << " ";
            for(i = 1; i <= R; i++) cout<< i << " ";
        }
        else for(i = n; i >= 1; i--) cout<< i << " ";

        cout<< endl;
    }
    return 0;
}
