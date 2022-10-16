#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <string.h>

#include <vector>
using namespace std;

int main()
{

    printf("Create vector: solution 1 -----------------------\n");
    vector<int> a(5); // create a vector without init, you get default value 0

    for(int i = 0; i < 5; i++)
        printf("%d\n", a[i]);


    printf("Create vector: solution 2 -----------------------\n");
    vector<int> b(5, 3); // you specify init value 3

    for(int i = 0; i < 5; i++)
        printf("%d\n", b[i]);



    printf("Create vector: solution 3 -----------------------\n");
    vector<int> c(b); // use another vector to init 

    for(int i = 0; i < 5; i++)
        printf("%d\n", c[i]);


    printf("Create vector: solution 4 -----------------------\n");
    int arr[] = {0, 1, 2, 3, 4};

    vector<int> d(arr, arr+5); 

    for(int i = 0; i < 5; i++)
        printf("%d\n", d[i]);



    printf("Create vector: solution 5 -----------------------\n");
    vector<int> e; // without declare size








    return 0;
}
