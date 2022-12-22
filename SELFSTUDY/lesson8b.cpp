/*
#include <iostream>
using namespace std;
int main()
{
    int toysbuy, eachtoycost, answer;
    cout<<"enter the number of toys you want to buy";
    cin>>toysbuy;
    
    if (0 <= toysbuy && toysbuy <= 5)
    {
        eachtoycost = 10;
    }

    else if (10 >= toysbuy && toysbuy >= 5)
    {
        eachtoycost = 8;
    }

    else if (15 >= toysbuy && toysbuy >= 11)
    {
        eachtoycost = 4;
    }
    else
    {
        cout<<"what are u doing";
    }

    answer = eachtoycost * toysbuy;
    cout<<answer;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int input,price;
    cin>>input;
    if(input<=0) cout<<"what are you doing";
    else if (input<=4) price=input*10;
    else if (input<=10) price = input*8;
    else if(input <= 15) price = input*6;
    else price = input * 4;
    cout<<price;
}
