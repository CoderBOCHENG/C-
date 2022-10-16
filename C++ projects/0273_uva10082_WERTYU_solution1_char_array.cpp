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
   char str[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    char buffer[1024];

    while(fgets(buffer, 1024, stdin) != NULL) {

        for(int i = 0; i < strlen(buffer); i++) {

           char* cp = strchr(str, buffer[i]);

           if(cp != NULL) {
            printf("%c", *(cp-1));
           } 
           else {
            printf("%c", buffer[i]);
           }

            


        }


    }


    return 0;
}