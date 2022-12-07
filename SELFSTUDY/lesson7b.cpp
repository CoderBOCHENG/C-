// break -> terminate program
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<100;i++)
    {
        cout<<i<<endl;
        for(int j=0;j<100;j++)
            if(j>50)break;
    }

    return 0;
    cout<<"this is end";
}
