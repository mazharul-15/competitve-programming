#include<bits/stdc++.h>
using namespace std;

int main() {

    int id, t;
    string str, str1;
    cin>> t;
    while(t--) {

        cin>> str >> str1;
        id = str.find(str1);
        if(id > -1) cout<< "Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
