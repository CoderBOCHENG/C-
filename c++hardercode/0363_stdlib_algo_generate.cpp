#include <bits/stdc++.h>
using namespace std;


int main() {


    int i = rand();
    printf("i = %d\n", i);


    vector<int> v(100);

    generate(begin(v), end(v), rand); 
    for_each(begin(v), end(v), [](int i){cout << i << " ";});
    cout << endl << " ---------------------- " << endl;

    generate(begin(v), end(v), [](){return rand() % 100;}); 
    for_each(begin(v), end(v), [](int i){cout << i << " ";});
    cout << endl << " ---------------------- " << endl;

    generate(begin(v), end(v), [](){return 100 + rand() % 100;}); 
    for_each(begin(v), end(v), [](int i){cout << i << " ";});
    cout << endl << " ---------------------- " << endl;

    int j = 1;
    generate(begin(v), end(v), [&](){return j++;});
    for_each(begin(v), end(v), [](int i){cout << i << " ";});
    cout << endl << " ---------------------- " << endl;

    /*
    
    []  : this part is called capture list.
    [&] : capture call external variables by reference.
    
    */





    return 0;
}