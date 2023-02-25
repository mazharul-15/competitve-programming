#include<bits/stdc++.h>
using namespace std;


int main() {

    int n, i, total, A[100005];
    long long int sum = 0;
    cin>> n;
    for(i = 0; i < n; i++) cin>> A[i];
    for(i = 0; i < n; i++) {
        total = (n-i)*(i+1);
        sum += (A[i] * total);
    }
    cout<< sum <<endl;
    return 0;
}
