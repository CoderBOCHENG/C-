/*
#include <iostream>

using namespace std;

int main()
{
    int maximum, input;
    cout<<"enter maximum";
    cin>>maximum;
    cout<<"enter 5 numbers";
    cin>>input;
    int i;
    for(int i=0;i<4;i++)
    {
        cin>>input;
        if(input > maximum)
            maximum = input;
    }
    cout<<maximum;
    return 0;
}
*/


// 1. define variable for storing maximum or minimum
// 2. set initial value to the variable
// 3. compare it with the other integers

#include <iostream>

using namespace std;

int main()
{
    int input,maximum,storage,minimum;
    cout<<"enter number of value.\n>";
    cin>>input;
    cout<<"key in values.\n>";
    cin>>maximum;
    minimum = maximum;
    for(int i=1;i<=input-1;i++)
    {
        cout<<">";
        cin>>storage;
        if(storage>maximum)
            maximum=storage;
        if(minimum>storage)
            minimum=storage;
    }
    cout<<maximum<<" "<<minimum;

}
   
