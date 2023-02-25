#include<bits/stdc++.h>
using namespace std;

/// user defined function
void print_function(char str1[]) {
    printf("%s\n", str1);

    char str2[1000];
    /// character array copy
    strcpy(str2, str1);
    printf("Copy string: %s\n", str2);

    /// character array concatenation
    char str3[] = "Feni university,";
    strcat(str3, str1);
    printf("Concatenation: %s\n", str3);



    /// two character array compare
    int val;
    val = strcmp("A", "a");
    if(val == 0) cout<< "YES\n";
    else if(val < 0) cout<< "sting1 is smaller\n";
    else if(val > 0) cout<< "strin1 is bigger\n";

    /// finding a character into a character array
    char str4[] = "Fahmid";
    int id;
    cout<< strstr(str4, "gh");
    ///cout<< id << endl;

    int len;
    char str4[] = "fahmid";
    len = strlen("fahmid");
    cout<< len << endl;
}

int main() {

    char ch[100];
    scanf("%s", ch);

    print_function(ch);

    return 0;
}
