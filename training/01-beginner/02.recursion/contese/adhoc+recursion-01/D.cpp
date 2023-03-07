#include<bits/stdc++.h>
using namespace std;

#define sz 10004

int main() {

    int t, n, i, sum, dif, val;
    int A[sz];

    cin>> t;

    while(t--) {
        for(i = 1; i < sz; i++) A[i] = 0;
        cin>> n;
        for(i = dif = 0; i < n; i++) {
            cin>> val;
            if(A[val] == 0) dif++;
            A[val]++;
        }
        for(i = 1, sum = 0; i < sz; i++) {
            if(A[i] > 0) sum += (A[i]- 1);
        }
        if(sum % 2) dif--;
        cout<< dif << endl;
    }
    return 0;
}
