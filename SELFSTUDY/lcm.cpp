#include<iostream>
using namespace std;
int main () 
{
  
int n1, n2, n3, i, x, lcm, hcf = 1;
cin >> n1;
cin >> n2;
cin >> n3;
x = n1 * n2 * n3;
for (i = 1; i <= x; i++)      
{
    if (i % n1 == 0 && i % n2 == 0 && i % n3 == 0)
{
    lcm = i;
    break;
}
    
}
  
 

  
cout<< lcm << endl;

}
