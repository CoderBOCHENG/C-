/*
gcd(a,0) = 
gcd(a,b) = gcd(b,a%b)

gcd(264,108)
    gcd(108,48)
        gcd(48,12)
            gcd(12,0)
gcd = 12

if b>0 -> a%b
if b>0 -> a%b
if b>0 -> a%b

stop when b=0, when b=0,a is greatestcommonfactor
*/
#include <iostream>
using namespace std;
int greatestcommonfactor(int a, int b)
{
	if (a == 0)
		return b;
	return greatestcommonfactor(b % a, a);
}
int main()
{
    int a,b;
    cin>>a>>b;
	cout <<greatestcommonfactor(a, b);
	return 0;
}



/*
simpler code:
#include<iostream>
using namespace std;
int main(){
    int a,b,r;
    cin>>a>>b;
    for(;b>0;)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cout<<endl;
    return 0;
}
*/
