#include<bits/stdc++.h>
using namespace std;


int output(int m) {

    /// base case or function stopping condition
    if(m == 3) {

        return 1;
    }

    output(m - 1);  /// container( 1 );
}

int main() {
    int n;

    ///cin>> n;

    int value = output(6); /// container(0)

    cout<< value << endl;

    return 0;
}
