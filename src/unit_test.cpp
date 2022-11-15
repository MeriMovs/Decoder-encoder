#include "header.h"

void unit_test(str text){
    if(decoder(encoder(text)) == text){
        std::clog << "--- PAS ---" << std::endl;
    } else {
        std::cerr << "--- ERROR ---" << std::endl;
    }
}