#include <iostream>
using namespace std;
 

void shape(int n)
{
    int gap = n - 1;
 

    for (int i = 0; i < n; i++)
    {

        for (int j = 0;j < gap; j++)
            cout << " ";

        for (int j = 0; j <= i; j++)
            cout << "* ";
 
        cout << endl;
        gap--;
    }

    gap = 0;
 

    for (int i = n; i > 0; i--)
    {
    
        for (int j = 0; j < gap; j++)
            cout << " ";
 
     
        for (int j = 0;j < i;j++)
            cout << "* ";
 
        cout << endl;
        gap++;
    }
}
 

int main()
{
    shape(5);
    return 0;
}
 
