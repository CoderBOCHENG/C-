/*
#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a number smaller than 12:"<<endl;
    cin >> n;

        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        
        cout << factorial;    
    }

    return 0;
}
*/



#include<stdio.h>

int main(){

    int x,num=1,n;

    printf("Enter a number smaller than 12: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        num=num*x; 

    printf("factorial is  ",n,num);

    return 0;

}
