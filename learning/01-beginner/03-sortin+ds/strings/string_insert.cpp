#include <iostream>
#include <string>

using namespace std;

// Function to demonstrate insert
void insertDemo(string str1, string str2)
{

    // Inserts str2 in str1 starting
    // from 6th index of str1
    str1.insert(6, str2, 5, 3);
    cout << "Using insert : ";
    cout << str1;
}

// Driver code
int main()
{
    string str1("Hello World! ");
    string str2("GeeksforGeeks ");

    cout << "Original String : " << str1 << endl;
    insertDemo(str1, str2);

    return 0;
}
