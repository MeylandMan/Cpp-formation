#include <iostream> //iostream = in-out stream
#include <vector>

//Namespaces can't be defined in the main function

namespace first {
    int x = 1;

}
/*
        TypeDef = reserverd keyword used to create an additional name
        (alias) for another data type
        Helps with readability and reduces typos
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t; // Adding _t at the end of the variable name is just a convention

//There's 2 way for writing typedef
//  typedef std::string text_t;
using  text_t = std::string;

int main() {
    using namespace first;
    int x = 0;
    std::cout << "The Main x : " << x << std::endl;
    std::cout << "The namespace x : " << first::x << std::endl;

    

    text_t str = "Yo mama";
    pairlist_t pairlist;

    return 0;
}
