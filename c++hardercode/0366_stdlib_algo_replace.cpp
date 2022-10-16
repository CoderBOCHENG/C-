#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "This is some string";

    vector<int> v(10);
    int i = 0;
    generate(begin(v), end(v), [&](){return i++;});
    for_each(begin(v), end(v), [](int i){cout << i << " ";});

    printf("\n ------------------------------\n\n");

    cout << s << endl;
    replace(begin(s), end(s), 's', 'B');
    cout << s << endl;

    //Requirement: in vector v, for those numbers greater than 5, let's replace them with 100
    replace_if(begin(v), end(v), [](int i){return i > 5;}, 100); // IMPORTANCE!!
    /*
    Pay attention:
    The 3rd param is a function, a lambda function(meaning a temporary / locally-defined / no-name function)
    The function returns a bool. When it is true, the number will be replaced with 100.
    */
    for_each(begin(v), end(v), [](int i){cout << i << " ";});


    return 0;
}

/*

IMPORTANCE!!! ----------------------------------------------------------------

replace(begin_iterator, end_iterator, old_char, new_char)

replace_if(begin_iterator, end_iterator, bool_lambda_func, new_char)

------------------------------------------------------------------------------

*/