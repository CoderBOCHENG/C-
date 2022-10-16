#include <bits/stdc++.h>
using namespace std;


int main() {

    // create - curly braces init ----------------------

    map<string, int> animals = {
        {"cat", 12},
        {"dog", 23},
        {"rabbit", 2}
    };

    // insert ---------------------------------------
    animals["horse"] = 6;
    animals.insert(pair<string, int>("goat", 6));
    animals.insert(make_pair("chicken", 4));

    // loop -----------------------------------------
    for_each(begin(animals), end(animals), [](auto p){cout << p.first << ", " << p.second << endl;});

    /*
    IMPORTANCE!!! ---------------------------------------------
    1) all key / value pairs in map are always sorted.
    2) because map is implemented using a balanced binary search tree (BST) internally.
    */

    // erase --------------------------------------------
    animals.erase("goat");
    animals.erase("horse");

    cout << " loop 2 --------------------------" << endl;
    for(auto i : animals) 
        cout << i.first << " : " << i.second << endl;

    cout << "check exists --------------------------------" << endl;

    if(animals.count("cat") > 0)
        cout << "There are " << animals["cat"] << " cats. Pair count is: " << animals.count("cat") << endl;
    // count("cat") returns how many pairs in the map whose key is "cat".

    if(animals.find("goat") == end(animals))
        cout << "goat doesn't exist in map" << endl;


    return 0;
}


/*

Last notes:
all functions come with cost.
map is always sorted, so map is slow in insertion, quick in look up O(log(N))

If you don't need this, then switch to unordered_map. 
*/