#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int n; 
    x = 8;
    y = 10;
    n = x<y;
    cout<<n<<"\n";

    n=x==y-1;
    cout<<n<<"\n";

    n = (x!=y)+(5>3)+(y-x==1);
    cout<<n<<"\n";

    return 0;
}
