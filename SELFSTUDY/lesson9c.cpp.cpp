/*
b<a   b=6    a=12
gcd b   if(a%b==0)
        {
            cout<<b;
        }
        else{
            for(int i = 1;i<=b/2;i++)
        }
b: b,b/2,b/3,b/4,etc
*/
#include <iostream>
using namespace std;
int main(){
    int a,b,ans;
    cin>>a>>b;
    int m=a;
    if(a<b){
        m = b;
    }
    if(a%b==0) cout<<b;
    else for(int i=b/2;i>=1;i++);
    return 0;
}
