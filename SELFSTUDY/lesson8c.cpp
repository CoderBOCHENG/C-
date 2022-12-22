#include<iostream>
using namespace std;
int main()
{
    int a=100;
    if(a%2 == 0)
    {
        cout<<"%2"<<endl;
        a=a/2;
    }
    else if(a%3 ==0)
    {
        cout<<"%3"<<endl;
        a = a/3;
    }
    else if(a%5==0)
    {
        cout<<"%5"<<endl;
        a=a/5;
    }
    else
    {
        cout<<"NOT %"<<endl;
        a=a-1;
    }
    cout<<"a="<<a<<endl;
}
