#include <bits/stdc++.h>
using namespace std;



int main() {


    char buffer[100];

    FILE* fp = fopen("0255_fgets_read_line_from_file.txt", "r");
    
    while(fgets(buffer, 100, fp) != NULL)
        printf("%s", buffer);

    fclose(fp);

    return 0;
}

/*

1) fopen helps open a file, return a file pointer
2) fgets(buffer, 100, fp)
   a) stops if it meets \n
   b) stops if it reaches its max 100.

*/