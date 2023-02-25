#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, q, i, elm, x;
    int tp, od, ev;
    long long int sum;
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &n, &q);
        for(i = od = ev = 0, sum = 0; i < n; i++) {
            scanf("%d", &elm);
            if(elm%2) od++;
            else ev++;
            sum += elm;
        }
        while(q--) {
            scanf("%d %d", &tp, &x);
            if(tp) {
                sum += (od*x);
                if(x%2) {
                    ev += od;
                    od = 0;
                }
            }
            else {
                sum += (ev*x);
                if(x%2) {
                    od += ev;
                    ev = 0;
                }
            }

            printf("%lld\n", sum);
        }
    }
    return 0;
}
