#include <iostream>
using namespace std;
int main() {
    int startday,days,miles = 0,endday,weeks,days_after;
    cin >> startday >> days;
    weeks = days/7;  //how many weeks
    days_after = days%7;  //still need how many days
    miles = 250*5*weeks;
    if(days_after>0)
    {
        endday = startday+days_after-1;
        if(endday ==6) days_after--;
        // 2 cases if >= 7 (start from sunday/before sunday)
        else if(endday>=7) 
        {
/*
example: start day = 5
days after = 3
end at day 7(sunday)
------------------------------
exmple: start day = 6
6->7->8 (8 is the bigenning monday of next week)
*/
            if(startday<7) days_after = days_after-2;
            else days_after--;
        }
        miles = miles+days_after*250; //find the total
    }
    cout<<miles;

    return 0;
}