#include <iostream>
using namespace std;
int main() {
  bool is_it_prime_number;
  int i, n;
  cin >> n;
  if (n == 0 || n == 1) {
    cout<<"not prime number";
    is_it_prime_number == false;
  }
  for (i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      cout<<"not prime number";
      is_it_prime_number == false;
    }
  }
  if (is_it_prime_number == true){
    cout<<"prime number";
  }
  else
  {
    cout<<"composite number";
  }

  return 0;
}
