/*
&& means and
|| means or
! means not
---------------------------
LOGIC:
true&&true -> true
true&&false -> false
false&&true -> false
false&&false -> false

true||true -> true
false||true -> true
true||false -> true
false||false -> false
----------------------------

EXAMPLE:

int a=10,b=8,c=5,d=0;

if(a>b&&c<d)

if(a>b || c<d)
---------------------------

cout<<(1<2&&1==2);
cout<<(1<2 || 1==2);
cout<<(!(1<2));

------------------------------


*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;
    if((a%3==0) && (a%5==0))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;

}
