#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, L, R, q, sum;
    int A[100003], csum[100003];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for(i = 1; i < n; i++) {
        csum[i] = A[i] + csum[i-1];
    }

    scanf("%d", &q);
    while(q--) {
        scanf("%d %d", &L, &R);
        L--;
        R--;
        sum = csum[R] - csum[L-1];
        printf("%d\n", sum);
    }
    return 0;
}
