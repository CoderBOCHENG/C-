/*
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1023
*/


#include <bits/stdc++.h>
using namespace std;


int main() {

    freopen("0273_input.txt", "r", stdin);


    /*
    because the character read from input should be interpreted as the one on its left, so I define
    */
   char str[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"; // the last char, auto added by c++, is \0

    int i, c;

    while((c = getchar()) != EOF) {

        for(i = 1; str[i] && str[i] != c; i++);
        /*
        all char in str are true, except the last one which is \0, so str[i] means: not reach the end of str
        the for loop has no loop body, its purpose is to find value of int i, which is the index of c in str.
        */

        if(str[i]) 
            putchar(str[i-1]);
        else
            putchar(c);
            
    }


    return 0;
}