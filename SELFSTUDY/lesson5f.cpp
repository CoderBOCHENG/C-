#include<iostream>
using namespace std;
int main(){
    int s;
    int i;
    int j;

    // the s means the size of the square like the square length ye
    cout<<"enter a number";
    cin>>s;
    for (int i=s;i>=1;i--){  
    
        for (int j=i;j>0;j--){
            cout<<"*";
        }
        
        cout<<endl;
        }
        return 0;
}
