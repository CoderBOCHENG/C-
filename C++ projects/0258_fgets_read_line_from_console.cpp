#include <bits/stdc++.h>
using namespace std;



int main() {


    char buffer[100];
    
    while(fgets(buffer, 100, stdin) != NULL)
        printf("%s", buffer);

    return 0;
}

/*

1) fopen helps open a file, return a file pointer
2) fgets(buffer, 100, fp)
   a) stops if it meets \n
   b) stops if it reaches its max 100.

*/