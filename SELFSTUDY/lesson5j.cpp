#include<iostream>
using namespace std;
int main(){
    int s;
    int rows;
    int col;
    // the s means the size of the square like the square length ye
    cout<<"enter a number";
    cin>>s;
    for (int rows = 1; rows <= s; rows++){  
    
        for (int col = 1; col <= rows; col++){
            cout<<"*";
        }
        
        cout<<endl;
        }
        return 0;
}
