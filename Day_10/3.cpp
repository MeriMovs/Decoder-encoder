/*Գրել Ֆունկցիա, որը ստանում է 2 vector տիպի արգումենտեր և ստուգում է, 
որ այն էլեմենտները որոնք հանդիպում են 2-րդ վեկտորում կան նայև առաջինում․
Ֆունկցիան իրականացնել template ձևով,
Եթե կարիք կա իրականացնել template specification.
Գրել main ֆունկցիա որտեղ կանչվել է ֆունկցիան հիմնական տիպերի համար, և ստուգել որ ունեք սպասված արդյունքը․*/


#include <iostream>
#include <vector>

template <typename T>
std::vector<T>  foo(std::vector<T> first_arr, std::vector<T> second_arr){
    std::vector<T> result_arr = {};

    for(int s = 0; s < second_arr.size(); s++){
        for(int f = 0; f < first_arr.size(); f++){
            if(second_arr[s] == first_arr[f]){
                result_arr.push_back(second_arr[s]);
            }
        }
    }
    for(auto e: result_arr){
        std::cout << e << " ";
    } std::cout << std::endl;
    return result_arr;
}

int main(){
    std::vector<std::string> str_first_arr = {"a", "b", "c", "d"};
    std::vector<std::string> str_second_arr = {"a", "b", "c", "e", "d"};
    std::vector<std::string> str_result_arr = foo(str_first_arr, str_second_arr);

    std::vector<int> int_first_arr = {1, 2, 3, 4};
    std::vector<int> int_second_arr = {1, 2, 5, 3, 4};
    std::vector<int> int_result_arr = foo(int_first_arr, int_second_arr);

    std::vector<char> char_first_arr = {'a', 'b', 'c', 'd'};
    std::vector<char> char_second_arr = {'a', 'b', 'c', 'e', 'd'};
    std::vector<char> char_result_arr = foo(char_first_arr, char_second_arr);

    std::vector<float> float_first_arr = {1.1, 2.2, 3.3, 4.4};
    std::vector<float> float_second_arr = {5.5, 1.1, 2.2, 3.3, 4.4};
    std::vector<float> float_result_arr = foo(float_first_arr, float_second_arr);


}