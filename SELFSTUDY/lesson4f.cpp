#include <iostream>
using namespace std;
int main()
{
    int n,output=0,remaindernumber;
    cout<<"enter any number with more than 1 digit:";
    cin>>n;

    while(n!=0){
        remaindernumber=n%10;
        output = output*10+remaindernumber;
        n/=10;
    }
    cout<<"your number enter in reversed is:\n"<<output<<endl;
    return 0;

}
