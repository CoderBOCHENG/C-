

#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    string year = s.substr(0,4);
    string month = s.substr(4,6);
    string day = s.substr(6,8);

    int y = stoi(year);
    int m = stoi(month);
    int d = stoi(day);
    

    cout<<"year is" << year << endl;
    cout<< "month is" << month << endl;
    cout<<"day is" << day << endl;
    return 0;
}