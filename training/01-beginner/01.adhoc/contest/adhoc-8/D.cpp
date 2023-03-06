#include<bits/stdc++.h>
using namespace std;

int main() {

    int i, t, m, s, ns, elm, flag, b[55];
    string ans;
    vector<int> v;

    cin>> t;

    while(t--) {
        v.clear();
        cin>> m >> s;
        flag = 0;
        for(i = 1; i <= m; i++) {
            cin>> elm;
            v.push_back(elm);
            s += elm;
        }

        i = 1, ns = 0;
        do {
            ns += i;
            i++;
        }while(ns <= s);

        cout<< ans <<endl;
    }
    return 0;
}
