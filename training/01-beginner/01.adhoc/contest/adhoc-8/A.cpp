#include<bits/stdc++.h>
using namespace std;

int main() {

    int T, a, b, c, tm1, tm2, ans;
    cin>> T;
    while(T--) {
        cin>> a >> b >> c;
        tm1 = abs(a - 1);
        tm2 = abs(b - c);
        if(c != 1) tm2 += (abs(c - 1));

        if(tm1 < tm2) ans = 1;
        else if(tm1 > tm2) ans = 2;
        else ans = 3;
        ///cout<< tm1 << " " << tm2 << " ans: ";

        cout<< ans << endl;
    }
    return 0;
}
