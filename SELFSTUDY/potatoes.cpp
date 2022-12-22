#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    if (r<=3) cout<<"thats a terrible potato!";
    else if (r>3 && r<=5)
        cout<<"thats a normal potato!";
    else if(r>=6 && r<=8)
        cout<<"thats a good potato!";
    else
        cout<<"OMG POTATOES!!!";
}