#include<bits/stdc++.h>
using namespace std;

#define sz 100002

int main() {

    int n, q, i;
    int arr[sz];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++) {
        arr[i] += arr[i-1];
    }

    //for(i = 0; i < n; i++) printf("%d ", arr[i]);
    // query
    int l, r, ans;
    scanf("%d", &q);
    i = 1;
    while(q--) {
        scanf("%d %d", &l, &r);
        if(l == 1) ans = arr[r-1];
        else ans = arr[r-1] - arr[l-2];
        printf("Case %d: %d\n", i++, ans);
    }

    return 0;
}
