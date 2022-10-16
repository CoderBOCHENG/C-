#include <iostream>
#include <string>

using namespace std;


// macro definition

// define macro constants
#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"


const int ARRAY_LENGTH_1 = 25;
const double PI_1 = 3.1416;
const char* FAV_WHISKY_1 = "Jack Daniels";
typedef double MY_DOUBLE_1; // typedef aliases a type   

int main()
{
    int numbers[ARRAY_LENGTH] = {0};
    cout << "Array's length: " << sizeof(numbers) / sizeof(int) << endl;

    cout << "Enter a radius: ";
    MY_DOUBLE radius = 0;
    cin >> radius;

    cout << "Area is: " << PI * radius * radius << endl;
    string favoriteWhisky(FAV_WHISKY);  // < PLACE 1 >
    cout << "My favorite drink is: " << FAV_WHISKY << endl;
    return 0;
}

/*

The preprocessor - #define

1) it runs before the compiler compiles your program
2) it simply replace the identifier with the text, without validation
3) don't use #define

*/