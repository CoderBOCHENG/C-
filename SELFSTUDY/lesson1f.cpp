#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    
    cout<<"please input 2 numbers";
    cin>>a>>b;
    
    cout<<"a="<<a<<"b="<<b<<endl;
    c=b;
    a=b;
    a=c;
    cout<<"after swap:"<<endl<<"a="<<a<<"b="<<b;

}
