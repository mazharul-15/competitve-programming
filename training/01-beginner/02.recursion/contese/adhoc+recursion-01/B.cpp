#include<bits/stdc++.h>
using namespace std;

int main() {

    string st, tm = "Timru";
    int n, t, i, f;
    cin>> t;

    while(t--) {
        cin>> n >> st;
        sort(st.begin(), st.end());

        st.compare(tm)==0? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}
