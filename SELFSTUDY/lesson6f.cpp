#include <iostream>
using namespace std;
int main()
{
    int i,a = 0;
    for (i=0;i<=1000;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            a=a+i;
        }
    }
    cout<<a;
    return 0;

}
