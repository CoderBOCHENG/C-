#include <bits/stdc++.h>
using namespace std;



int main() {

    FILE* fp = fopen("0255_fgets_read_line_from_file.txt", "r");
    
    int c;

    while((c = fgetc(fp)) != EOF)
        printf("%c", (char)c);

    fclose(fp);

    return 0;
}

/*
fgetc(fp) reads a char from file pointer fp
it returns a int.
All files end with EOF, which is not a char, but a int. so we have to read it as int, check whether it is EOF, if it is not, then we convert it to char.

*/