#include <iostream>
using namespace std;

int main() {
  //yr is year short form (for me)
  int yr;
  cout << "enter the year number(4 digit) ";
  cin >> yr;

  if (yr % 400 == 0) 
  {
    cout <<"yes";
  }
  else if (yr % 100 == 0) 
  {
    cout << "no";
  }
  else if (yr % 4 == 0) 
  {
    cout <<"yes";
  }
  else {
    cout<<"no";
  }

  return 0;
}
