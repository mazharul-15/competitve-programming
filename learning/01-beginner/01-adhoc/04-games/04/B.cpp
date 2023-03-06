#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, k, n, inc, num, diff;
    cin>> t;

    while(t--) {
        cin>> k >> n;
        diff = n - k;
        inc = 0, num = 1;
        while(k--) {
            if(inc <= diff && num+inc < n) {
                num += inc;
                inc++;
            }
            else num++;
            cout<< num << " ";
        }
        cout<< endl;
    }
    return 0;
}
