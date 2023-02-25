/*
    istringstream  is a word divider

*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    string s, word;
    getline(cin, s);

    istringstream iss(s);

    while(iss >> word) cout<< word << endl;
    return 0;
}
