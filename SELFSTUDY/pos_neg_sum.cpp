#include <iostream>
using namespace std;
int main()
{
    int n;
    int pos = 0, postotal = 0;
    int neg = 0, negtotal = 0;
    while(n!=0)
    {
        cout<<"hello world";
        cin>>n;
        if(n>0){
            pos+=n;
            pos++;
        }
        else if(n<0){
            neg+=n;
            neg++;
        }
        else{
            cout<<"positive = "<<pos<<" "<<"negative = "<<neg<<" ";
            cout<<"positive total = "<<postotal<<" "<<"negative total = "<<negtotal<<" ";
        }
    }
    return 0;
}





