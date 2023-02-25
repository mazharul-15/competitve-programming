#include<bits/stdc++.h>
using namespace std;

/*
int main() {

    string str1, str2;
    int t, ans, L, R;
    cin>> t;

    while(t--) {
        string str3;
        cin>> str1 >> str2;
        L = 0, R = str2.size() - 1;

        for(int i = 0; i < str2.size(); i++) {
            str3 += str1[i];
        }
        // sliding window
        ans = 0;
        while(R <= str1.size()) {
            if(str2 == str3) ans++;
            L++, R++;
            str3 += str1[R];
            str3.erase(str3.begin());
        }

        cout<< ans << endl;
    }
    return 0;
}
*/

int main() {

    string s1, s2, s3;
    cin>> s1 >> s2;
    int ans = 0;

    for(int i = 0; i < s2.size(); i++) s3 += s1[i];

    // sliding window
    for(int i = s3.size()-1; i < s1.size();) {
        if(s2 == s3) {
                //cout<< i << endl;
                ans++;
        }
        s3 += s1[++i];

        s3.erase(s3.begin());

        cout<< s3 << endl;
    }
    cout<< endl << ans <<endl;
    return 0;
}

/*
testing input:
aaaaa
aa

ababcacabcaabc
abc

testing output:
4

3
*/

