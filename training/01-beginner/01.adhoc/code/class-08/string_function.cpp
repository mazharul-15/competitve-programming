#include<bits/stdc++.h>
using namespace std;

void string_pass(string kawsar) {

    cout<< kawsar << endl;

    /// push_back
    kawsar.push_back('5');
    cout<< kawsar << endl;

    /// pop_back
    kawsar.pop_back();
    cout<< kawsar << endl;
}

int main() {

    string str;

    cin>> str;
    //getline(cin, str);

    /// string passing to a function
    string_pass(str);

    /// iterator
    string:: iterator itr;
    for(itr = str.begin();  itr != str.end(); itr++) {
        cout<< *itr;
    }

    /// for(int i = 0; str[i] != '\0'; i++)
    return 0;
}
