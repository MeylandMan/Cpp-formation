#include <iostream> //iostream = in-out stream
using namespace std;

/*
    int = integer number only : 16 bits and Range -32768 to 32767
    float = decimal number only : 32 bits and Range 3.4E-38 to 3.4E+38
    double = decimal number only : 64 and Range 1.7E-308 to 1.7E+308
    char = one string inside it : 8 bits and Range -128 to 127
    bool = true or false : 1 bit
*/

int main() {
    // there's two ways for stocking string in a variable :

    string Name = "Dimitrie";
    char name[] = "Dimitrie";

    //end 

    cout << "Hello World!" << std::endl;
    cout << "Welcome to the console." << std::endl;

    // To create a constante we use 
    const float PI = 3.14159;
    const int weekdays = 7;

    return 0;
}
