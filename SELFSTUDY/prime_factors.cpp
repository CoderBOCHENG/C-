#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    while (n % 2 == 0){
        cout << 2 <<endl;
        n = n/2;
    }
    for (int i = 2; i <= sqrt(n);){
        if (n % i == 0){
            cout << i <<endl;
            n = n/i;
        }
        else
        {
            i++;
        }
        
    }
    if (n > 2){
        cout << n <<endl;
    }    
    return 0;
}
 

 