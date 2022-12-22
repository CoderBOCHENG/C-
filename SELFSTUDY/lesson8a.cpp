#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number";
    cin>>a;

    if (a<5 && a>0)
        cout<<10*a;

    else if(a<=10)
        cout<<8*a;

    else if (a<=15)
        cout<<6*a;
    
    else if (a>15)
        cout<<4*a;
}
