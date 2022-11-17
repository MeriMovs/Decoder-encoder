#include "header.h"

str decoder(str text){
    str decode_text = text;
    for(int h = 0; h < text.size(); h++){
        decode_text[h] = char(int(text[h])-3);

    }
    return decode_text;
}