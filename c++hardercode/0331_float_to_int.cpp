#include <bits/stdc++.h>
using namespace std;


void int_vs_float() {

    int a = 4 / 6; // quotient is 0
    printf("a = %d\n", a); // 0

    float b = 4 / 6; // assign int 0 to float b
    printf("b = %f\n", b); // 0.000000

    int c = 4 / 6.0; // assign float 2/3 to int, all values after decimal point will be removed. 
    printf("c = %d\n", c); // 0

    c = 0.999999;
    printf("c = %d\n", c); // 0

    float d = 4 / 6.0; 
    printf("d = %f\n", d); // 0.666667

}

void ceil_floor_round() {

    int a = ceil(1.2);  // 2
    int b = floor(1.2); // 1
    int c = round(1.2); // 1

    int d = ceil(1.9);  // 2
    int e = floor(1.9); // 1
    int f = round(1.9); // 2
    
   printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);

}



int main() {

    int_vs_float();

    ceil_floor_round();


    return 0;
}