#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, id;
    string str1, str2;
    stack<int> st;
    char ch;

    cin>> t;

    while(t--) {
        cin>> n >> str1;
        str2.clear();

        for(int i = n-1; i >= 0; ) {
            if(str1[i] != '0') {
                id = str1[i] - '0';
                i = i - 1;
            }
            else {
                id = str1[i-2] - '0';
                id = id*10 + str1[i-1] - '0';
                i = i - 3;
            }
            st.push(id);
        }
        while(!st.empty()) {
            id = st.top();
            ch = 96 + id;
            //cout<<ch;
            str2 += ch;
            st.pop();
        }
        cout<< str2 << endl;
        //cout<< endl;
    }
    return 0;
}
