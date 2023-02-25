#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, i, j, sum, sum2, elm;
    int P[105];

    cin>> t;
    while(t--) {
        cin>> n;
        sum = (n*(n+1)) / 2;
        for(i = 1; i <= n; i++) {
            for(j = 1, sum2 = 0; j < n; j++) {
                cin>> elm;
                sum2 += elm;
            }
            P[i] = (sum - sum2);
        }
        for(i = 1; i <= n; i++) cout<< P[i] << " ";
        cout<< endl;
    }
    return 0;
}
