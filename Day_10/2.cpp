/*Գրել ֆունկցիա, որը ստանում է vector<string> տիպի արգումենտ։
 Ֆունկցիան վերադարձնում է այն էլեմենտները, որոնք պարունակում են թվեր։
Օրինակ  " <"Hello", "1student", "bestfrends4ever", "bye"> վեկտորի 
դեպքում արդյունքում պետք է ունենալ "1student" և "bestfrends4ever" էլեմենտները։
Գրել main ֆունկցիա որտեղ կանչվել է ֆունկցիան  և ստուգել որ ունեք սպասված արդյունքը։
Կարող եք օգտագործել գրադարանային ֆունկզցիաներ։*/


#include <iostream>
#include <vector>
#include <algorithm>


std::vector<std::string> foo(std::vector<std::string> arr){
    std::vector<std::string> res_arr = {};

    for(int e = 0; e < arr.size(); e++){
        if (std::any_of(arr[e].begin(), arr[e].end(), ::isdigit)){
            res_arr.push_back(arr[e]);
        }
    }
    return res_arr;
}
void positive_test(std::vector<std::string> arr){
    std::vector<std::string> expected_arr = {"1student", "bestfrends4ever"};

    if (foo(arr) != expected_arr){
        std::cerr << "positive_test:  --- ERROR --- " << std::endl;
    } else{
        std::clog << "positive_test:  --- Pass --- " << std::endl;
    }
}

void negative_test(std::vector<std::string> arr){
    std::vector<std::string> expected_arr = {"Hello", "bestfrends4ever"};

    if (foo(arr) == expected_arr){
        std::cerr << "negative_test:  --- ERROR --- " << std::endl;
    } else{
        std::clog << "negative_test:  --- Pass --- " << std::endl;
    }
}

int main(){
    std::vector<std::string> arr = {"Hello", "1student", "bestfrends4ever", "bye"};
    std::vector<std::string> res_arr = foo(arr);
    positive_test(arr);
    negative_test(arr);

    for (auto e: res_arr){
        std::cout << e << "\t";
    } std::cout << std::endl;
}