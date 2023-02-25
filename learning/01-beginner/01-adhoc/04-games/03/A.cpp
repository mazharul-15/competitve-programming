#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, t, i, dif, mx1, mx2;
    int A[200005], B[200005];
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        sort(B, B + n);
        mx1 = B[n-1];
        mx2 = B[n-2];

        for(i = 0; i < n; i++) {
            if(A[i] == mx1) dif = A[i] - mx2;
            else dif = A[i] - mx1;
            printf("%d ", dif);
        }
        printf("\n");
    }
    return 0;
}
