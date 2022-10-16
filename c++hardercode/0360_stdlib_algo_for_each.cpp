#include <bits/stdc++.h>
using namespace std;


void print(int i) {
    cout << i << " ";
}



int main() {

    vector<int> v(10);

    for(int i = 0; i < v.size(); i++)
        v[i] = i;

    cout << endl << " traditional way --------------------" << endl;
    for(auto it = begin(v); it != end(v); it++)
    cout << *it << " ";

    cout << endl << " for_each solution 1------------------" << endl;
    for_each(begin(v), end(v), [](int i) {cout << i << " ";});

    cout << endl << " for_each solution 2 ------------------" << endl;
    for_each(begin(v), end(v), print);


    /*
    
    Q) What is lambda?
    A) lamba means unnamed function.

    You pass a function as parameter to another function -> this is called functional programming.
    */



    return 0;
}