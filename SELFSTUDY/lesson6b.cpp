/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<round(a/b);
    return 0;
}
*/


#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b";
    cin>>b;

    if(a%b>0)
    {
        a/b+1;
    }
    else
    {
        a/b;
    }
    return 0;
}
