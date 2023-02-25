#include<bits/stdc++.h>
using namespace std;


int main() {

    int t, n, i, cnt, L , R;
    int A[200005];

    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        A[0] = A[n+1] = INT_MAX;
        for(i = 1; i <= n; i++) scanf("%d", &A[i]);

        //processing
        L = R = 1;
        cnt = 0;
        while(R <= n) {
            if(A[R] == A[R+1]) R++;
            else if(A[R] > A[R+1]) L = ++R;
            else {
                if(A[L-1] > A[L]) cnt++;
                L = ++R;
            }
        }

        if(cnt == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
