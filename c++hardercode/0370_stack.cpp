#include <bits/stdc++.h>
using namespace std;

    /*
    
    4 main operations

    push  - add an element to the top of stack
    pop   - remove top of the stack 
    top   - return top of the stack
    empty - tells you whether it is mepty or not
    size  -  
        
    */

int main() {

     stack<int> s;
     s.push(10);
     s.push(15);
     s.push(20);

     while(!s.empty()) {
          cout << s.top() << ", size is: " << s.size() << endl;
          s.pop();
     }

    return 0;
}