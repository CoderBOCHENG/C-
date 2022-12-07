// break -> terminate program
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<100;i++)
    {
        cout<<i<<endl;
        for(int j=0;j<10;j++)
        {
            cout<<j;
            if(j>5) break;
        }
    }
    return 0;
    cout<<"this is end";
}
