#include <bits/stdc++.h>
using namespace std;



int main() {
 
    int c;

    while((c = fgetc(stdin)) != EOF)
        printf("%c", (char)c);


    return 0;
}

/*
fgetc(fp) reads a char from file pointer fp
it returns a int.
All files end with EOF, which is not a char, but a int. so we have to read it as int, check whether it is EOF, if it is not, then we convert it to char.

*/