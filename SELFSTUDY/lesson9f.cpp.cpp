#include <iostream>
using namespace std;
int greatestcommondivisor(int a, int b)
{
  if (b == 0)
    return a;
  return greatestcommondivisor(b, a % b);
}


int leastcommonmultiple(int a, int b)
{
    return (a / greatestcommondivisor(a, b)) * b;
}



int main()
{
    int a,b;
    cin>>a>>b;
    cout <<leastcommonmultiple(a, b);
    return 0;
}