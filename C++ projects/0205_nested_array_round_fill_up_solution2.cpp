/*
Read a number n from console.
Create a 2 dimensional array （square size) .
Start from 1, fill up the array from the upper right corner, then go downwards,
when it reaches the border, goes left.
Fill up the square array as the output below, till the array has been completely filled up.
Print it to the console.

Input: n
4

Output:
10 11 12 1
9  16 13 2
8  15 14 3
7  6  5  4

Constraints:
2 <= n <= 10

*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    // Step 1) Prepare data --------------------------

    // because max n is 10, so I just define a 2-d array, 10 * 10
    int arr[10][10];

    memset(arr, 0, sizeof(int) * 100);

    int n;
    scanf("%d", &n);

    // Step 2) main logic ----------------------------

    /*
    n * n

      n + (n-1) + (n-1) + (n-2) + (n-2) .... + 1 + 1
    = n + 2 * [(n -1) + (n -2) + .... + 1]
    = n + 2 * [1 + (n-1)] * (n -1) / 2
    = n + n * (n - 1)
    = n * n

   --------------------------------------------------------

   Core Logic:
   There are 2 looping variables here.
   1) d(direction) : continuous looping d / l / u / r. We can use int value 0 / 1 / 2 / 3 to represent the 4 values
   2) c(count)     : start with array size n, the followed (n-1) / (n-1) / (n-2) / (n-2) .... 1 / 1

    */



    int k = 1; // define increasing variable k, increasing from 1 to n*n

    int d = 0; // direction
    int c = 0; // fill count

    int x = -1;
    int y = n - 1; // start position: [0][n-1]

    for (int i = 0; ; i++) {

        c = (n*2 - i) / 2;
        d = i % 4;

        if(c == 0)
            break;

        switch(d) {

          case 0:  // down
            for(int j = 0; j < c; j++) // fill spaces count: c times
              arr[++x][y] = k++;
            break;


          case 1:  // left
            for(int j = 0; j < c; j++) // fill spaces count: c times
              arr[x][--y] = k++;
          break;

          case 2:  // up
            for(int j = 0; j < c; j++) // fill spaces count: c times
              arr[--x][y] = k++;
          break;

          case 3:  // right
            for(int j = 0; j < c; j++) // fill spaces count: c times
              arr[x][++y] = k++;
          break;

        }

    }


    // print the result --------------------------

    for(x = 0; x < n; x++) {

      for(y = 0; y < n; y++) {
        printf("%d\t", arr[x][y]);
      }
      printf("\n");

    }



    return 0;
}