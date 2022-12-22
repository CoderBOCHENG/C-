//method 1

/*
#include <iostream>
using namespace std;
int main() {
  int i;
  int n = 2;
  int x = 300;
  bool primeornot = true;
  while (n < x) {
    primeornot = true;
    if (n == 0 || n == 1) {
      primeornot = false;
    }
    for (i = 2; i <= n/2; i++) {
      if (n % i == 0) {
        primeornot = false;
        break;
      }
    }
    if (primeornot)
      cout << n << ", ";
    n++;
  }
  return 0;
}
*/

//method 2

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int composite;
    for(int i=2;i<=300;i++)
    {
        composite = 0;
        for(int j=2;j<=sqrt(i); j++)
        {
            if(i%j == 0)
            {
                composite = 1;
                break;
            }
        }
        if(composite ==0) cout<<i<<endl;
    }
}