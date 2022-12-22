#include<iostream>
using namespace std;


int main()
{
	int a,b,difference,x,y;
	cout<<"Enter any number:";
	cin>>a;
	cout<<"enter number  again";
	cin>>b;

	if(a>0)
		cout<<"The absolute value of number is:"<<a;
	else
		cout<<"The absolute value of number is:"<<-(a);
	cout<<endl;
	cin>>x;


	if(b>0)
		cout<<"The absolute value of number is:"<<b;
	else
		cout<<"The absolute value of number is:"<<-(b);
	cout<<endl;
	cin>>y;



	difference = x-y;
	cout<<"the difference of the absolue of number is",difference;
	return 0;
}
