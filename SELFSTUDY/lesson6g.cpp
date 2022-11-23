#include <iostream>
using namespace std;
int main()
{
    int a,b,backup;
    cin>>a;
    backup == a;
    b=0;
    for(;a>0;a=a/10)
    {
        b=b*10+a%10;
    }
    if(backup==b)
    {
        cout<<backup<<"is a palindrome";
    }
    else
    {
        cout<<backup<<"is not palindrome";
    }
    
}
