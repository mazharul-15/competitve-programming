/*
    Strings Basic Functions
    1. size: str.size()
    2. sort: sort(str.begin(), str.end())
    3. reverse: reverse(str.begin(), str.end())
    4. substr: str.substr(staring index, number of char)
    5. getline: getline(cin, str)
    6. toupper
    7. tolower
    8. istringstream:
    9. erase: str.erase(str.begin() + indexnumber)
    10. pop_back: str.pop_back()
    11. push_back: str.push_back(character)


*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>> str;
    cout<< "Original String: " << str << endl;

    // size
    cout<< "String size: " << str. size() << endl;

    // sort
    sort(str.begin(), str.end());
    cout<< "Sort: " << str << endl;

    // reverse
    reverse(str.begin(), str.end());
    cout<< "Reverse: " << str << endl;

    // sub-string
    /*
    cout<< "sub-string\n\n";
    int subStr  = str.size(), len;
    subStr = (len*(len+1)) / 2;
    for(int i = 0; i < subStr; i++) {
        for(int j = i, ch = 1; j < len; j++) {
            string ans1 = str.substr(i, ch++);
            cout<< ans1 << endl;
        }
    } */
    string str1;
    cin>> str1;
    string ans = str1.substr(4, 2);
    cout<<"substr: "<< ans << endl;

    // getline: to take a line with white space
    /*string str2;
    getline(cin, str2);
    cout<< str2 << endl; */

    // istringstream

    // erase
    str1.erase(str1.begin() + 1);
    cout<< "Character Erasing: " << str1 << endl;

    string str3;
    cin>> str3;
    cout<< "original string: " << str3 << endl;
    str3.pop_back();
    cout<<"pop_back: " << str3 << endl;
    str3.push_back('A');
    cout<<"push_back: "<< str3 << endl;

}
