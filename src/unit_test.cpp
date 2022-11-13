#include <iostream>
#include "header.h"

void test_coder(const std::string& text, std::string text1){
    text1 = text;

    std::string result = coder(text, text1, 1);
    if (text != coder(result, text1, 2)){
        std::cerr << "\t-- ERROR --- \n " << std::endl;
    } else {
        std::cout << "\t-- PASS --- \n" << std::endl;
    }

}
