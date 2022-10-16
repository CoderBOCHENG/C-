#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("0200_uva_11614_input.txt", "r", stdin); // remove this line when you submit online

    int tc_count; // number of test cases
    scanf("%d", &tc_count);

    while(tc_count--) { //shortcut to repeat until 0

        long long i;
        scanf("%lld", &i);

        // here begins your logic


        /*
        [solution 1]
        I define a vector / list
        I put value:
        1 / 1+2 / 1+2+3 / 10 / 15 / ... .... ...

        Then I compare i vs the values inside the vector 

        [solution 2]
        Assume the soldiers can form n lines, then:

        1, 2, 3..... n

        n*(1+n)/2 = i
        n^2 + n = 2i
        n^2 + n - 2i = 0
        
        n = (-1 + sqrt(1 + 8i))/2
        */

       cout << ((int)sqrt(8*i + 1) - 1) / 2 << endl;

    }



    return 0;
}

/*

Here is the question:
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2661

Quick submit at:
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=25

*/