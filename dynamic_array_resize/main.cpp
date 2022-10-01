#include "DArray.h"
#include <iostream>

int main(){
    DArray d(10);

    std::cout << "d with size 10: " << std::endl;
    std::cout << d << std::endl;

    d.grow(20);

    std::cout << "d with size 20: " << std::endl;
    std::cout << d << std::endl;

    return 0;
}