#include <iostream>
#include "header.h"

typedef std::string str;

str coder(const str& text, str text1, int code){
    for (int c = 0; c < int(text.size()); c++) {
        if (code == 1){
            text1[c] = char(encoder(text[c]));
        } else if(code == 2){
            text1[c] = char(decoder(text[c]));
        }
    }    
    return text1;
}


int main(){
    str text;
    std::cout << "Enter some text : ";
    std::cin >> text;
    std::cout << "Enter 1 of encode or 2 for decode : ";
    int code;
    std::cin >> code;

    str text1 = text;

    str text2 = coder(text, text1, code);
    std::cout << text << " = " << text2 << std::endl;


    std::cout << "\n -----------------------------------\n\n";

    std::cout << "test 1";
    test_coder("hello", text1);

    std::cout << "test 2";
    test_coder("Some text", text1);
}
