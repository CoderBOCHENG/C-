

#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int hour = a+c;
    int minute = b+d;
    if (minute >= 60) {
        hour++;
        minute -= 60;
    }
    if(hour >= 24) {
        hour -= 24;
    }
    printf("%d %d", hour, minute);
    return 0;
}






/*
int t_h,t_m,f_h,f_m,a_h,a_m
cout<<"take off time:";
cin>>t_h>>t_m;
cout<<"flight time:";
cin>>f_h>>f_m;
a_m = (t_g+f_h)*60+t_m+f_m;
a_h = a_m/60%24;
a_m = a_m%60;
cout<<"arrival time:"<<a_h<<"<<a_m;"




*/



