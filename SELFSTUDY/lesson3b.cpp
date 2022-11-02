#include <iostream>
using namespace std;
int main()
{
    int a,b = 5;
    b++; //b = 6 now
    ++b ; //b = 7 now
    a=b++; // a=b;b=b+1;
    a=++b; // b=b+1;a=b;
    cout<<a<<ends<<b<<endl;
}