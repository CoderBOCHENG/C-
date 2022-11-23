#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"enter 3 sides of the triangle";
    cin>>a,b,c;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout<<"this is a triangle";
    }
    else
    {
        cout<<"this is not a triangle";
    }
}
