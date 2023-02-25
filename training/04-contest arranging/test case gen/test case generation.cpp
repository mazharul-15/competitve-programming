#include<bits/stdc++.h>
using namespace std;

#define st 1
#define ed 1000000000
#define ed1 100000

int main() {
    freopen("input_plaindrome.txt", "w", stdout);
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(st, ed);
    std::uniform_int_distribution<int> distribution1(st, ed1);

    generator.seed(time(0));

    /*
    // for Even-Odd
    int test, m, n;
    //test = distribution(generator);
    test = 100000;
    printf("%d\n", test);
    while(test--) {
        m = distribution(generator);
        n = distribution(generator);
        printf("%d %d\n", m, n);
    }
    */

    /*/
    // for Possible triangle
    int test, a, b, c;
    test = 100000;
    printf("%d\n", test);
    while(test--) {
        a = distribution(generator);
        b = distribution(generator);
        c = distribution(generator);

        printf("%d %d %d\n", a, b, c);
    }
    */
    /*
    /// for maximum diff
    int test, i, n, value;
    test = 100;
    printf("%d\n", test);
    while(test--) {
        n = distribution(generator);
        printf("%d\n", n);
        for(i = 1; i <= n; i++) {
            value = distribution1(generator);
            printf("%d ", value);
        }
        printf("\n");
    }
    */
    ///*
    /// for plaindrome
    int test, n;
    test = 100000;
    printf("%d\n", test);

    while(test--) {
        n = distribution(generator);
        printf("%d\n", n);
    }

    ///*/
    return 0;
}
