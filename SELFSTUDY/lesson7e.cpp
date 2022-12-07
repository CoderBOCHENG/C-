/*
for a given positive integer n find the smallest palindrome number
P that satisfies P>N


MY CODE: 

#include <iostream>
using namespace std;
int main()
{
	int n, i, reversed_number, num = 0;
	cout<<"enter number for n";
	cin>>n;
	for (int i = n+1;i>0;i++) { 
	    for(int ; ){
		    n = num % 10;
		    reversed_number = (reversed_number * 10) + i;
		    num = num / 10;
	    }
    }
	if (i == reversed_number) {
		cout<<i;
		return 0;
	}
	}
	cout<<"no"
}
*/

// CORRECT CODE
#include <iostream>
using namespace std;
int main()
{
    int a,b,d;
    cin>>a;
    for(int i=a+1;i>a;i++)
    {
        d = 0;
        b = i;
        for(;b>0;b=b/10)
        {
            d = d*10+b%10;
        }
        if(i == d)
        cout<<i;
        if(i==d)break;
    }
}

/*
LOGIC:

(1)get reversed number of i, named reverse for()
(2)i == reverse, cout<<, return 0

- smallest and biggest possible number
smallest: -2147483648
biggest: 2147483648
- use for loop and if loop
*/



