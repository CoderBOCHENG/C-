#include <bits/stdc++.h>
using namespace std;


typedef pair<int, string> person;

int main() {

    /*
    
    4 main operations

    push  - enqueue
    pop   - dequeue 
    top   - returns head of queue
    empty - tells you whether it is mepty or not
    size  -  
        
    */

    priority_queue<person> pq;

    pq.push(make_pair(18, "Jack"));
    pq.push(make_pair(16, "Jill"));
    pq.push(make_pair(19, "Joe"));
    pq.push(make_pair(17, "Jessica"));

    while(!pq.empty()) {

        cout << pq.top().second << " is "
             << pq.top().first << " years old. Now priority queue size is: "
             << pq.size() << endl;

        pq.pop();
    }






    return 0;
}