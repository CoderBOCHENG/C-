#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    //printf("%d %d %d %d",a, b, c, d);
    int hour = c-a;
    int minute = 0;

    if (d > b) {
        minute = d-b;
    }
    else {
        minute = d+60-b;
        hour--;
    }
    printf("%d %d", hour, minute);
    return 0;
}