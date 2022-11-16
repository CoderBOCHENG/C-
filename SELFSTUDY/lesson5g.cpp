#include<iostream>
using namespace std;
int main(){
    int s;
    int row;
    int col;
    // the s means the size of the square like the square length ye
    cout<<"enter a number";
    cin>>s;
    for (int row = 1; row<=s;row++){  
    
        for (int col = 1; col<= s; col++){
            cout<<"*";
        }
        
        cout<<endl;
        }
        return 0;
}
