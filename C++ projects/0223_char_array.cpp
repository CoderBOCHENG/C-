#include <bits/stdc++.h>
using namespace std;


int main() {

    char s[10] = "Shatner";
    printf("%s\n", s);

    for(int i = 0; i < strlen(s); i++) {
        printf("%c\n", s[i]);
    }

    char s1[10] = {'S', 'h', 'a', 't', 'n', 'e', 'r', '\0'};
    printf("s1 size is: %d", strlen(s1));

    return 0;
}

/*
IMPORTANCE!!! -----------------------------
1) in C, we use character array to express string

2) strlen(s) tells you the length of a character array (string)

3) C adds sentinel character(\0) at the end of the string.
   So that C knows it has reached the end of the string.

-------------------------------------------
*/