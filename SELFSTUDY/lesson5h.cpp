#include<iostream>
using namespace std;
int main(){
    int a,r;
    for(int i= 1; i<5 ; i++) 
    {
        cin>>a;
        r = 0;
    }
        for(;a>0; a=a/10) 
        {
            r = r*10 + a%10;
        }
        cout<<r<<endl;
}
