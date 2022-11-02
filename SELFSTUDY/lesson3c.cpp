#include <iostream>
using namespace std;
int main(){

int a,b;
b = 10;
cout<<"b="<<b<<endl;
a=b++*3;
cout<<a<<""<<b<<endl;
a=++b*3;
cout<<a<<""<<b<<endl<<endl;
return 0;
}