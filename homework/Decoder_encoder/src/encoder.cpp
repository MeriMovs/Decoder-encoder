#include "header.h"

str encoder(str text){
    str encode_text = text;
    for(int h = 0; h < text.size(); h++){
        encode_text[h] = char(int(text[h])+3);

    }
    return encode_text;
}