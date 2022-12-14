#include <iostream>
using namespace std;
int main() {

  int i, n;
  cin >> n;
  if (n == 0 || n == 1) {
    cout<<"not prime or composite";
  }
  
  
  for (i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      cout<<"composite number";
    }
      else
      {
          cout<<"prime number";
      }
  }
  
 

  return 0;
}
