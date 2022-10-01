#include "Sample.h"
#include <iostream>

int main(){
    Sample a(5);
    Sample b(a);

    std::cout << "==Sample a:" << std::endl;
    std::cout << a;
    std::cout << "==Sample b:" << std::endl;
    std::cout << b;

    // remember, even though we don't explicitly call ~Sample(), it gets 
    // called at the end of this function since the lifetime of the
    // variable is over.

    return 0;
}