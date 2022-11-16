#include <iostream>
using namespace std;
int main()
{
    int a=99;
    if(a%2 == 1)
    {
        cout<<"true"<<endl;
        a=(a+1)/2;
    }
    else
    {
        cout<<"false"<<endl;
        a=a/2;
    }
    cout<<"a="<<a<<endl;
    return 0;
}
