// calculating gcd of 3 numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    cout<<"enter number";
    cin>>a>>b>>c;
    for(;b>0;)
    {
        temp = a;
        a = b;
        b = temp%b;
    }
    for(;c>0;)
    {
        temp = a;
        a = c;
        c = temp%c;
    }
    cout<<a;
    return 0;
}