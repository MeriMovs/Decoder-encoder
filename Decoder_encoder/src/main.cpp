#include <iostream>
#include "header.h"

int main(){
    std::string text;
    std::cout << " Enter some text: ";
    std::cin >> text;
    std::cout << " decode: "<< decoder(text) << std::endl;
    std::cout << " encode: "<< encoder(text) << std::endl;
    unit_test(text);
}