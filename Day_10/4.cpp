/*Գրել ծրագիր, որը վերադարձնում է վեկտորի այն տարրերը, որոնք խիստ փոքր են 
ձախ և աջ հարևաններից (չստուգել առաջին և վերջին էլեմենտների համար)

Օրինակ ։
input: [4,5,2,7,9]
output: [2]*/

#include <iostream>
#include <vector>


std::vector<int> get_nums(std::vector<int> arr){

    std::vector<int> result_arr = {};
    int result1 = 0, result2 = 0;

    for(int e = 1; e < arr.size()-1; e++){
        result1 = arr[e-1] - arr[e];
        result2 = arr[e+1] - arr[e];

        if((result1 >= 3) && (result2 >= 3)){
            result_arr.push_back(arr[e]);
        }
    }
    return result_arr;
}

int main(){
    std::vector<int> arr = {4,5,2,7,9};
    std::vector<int> res_nums = get_nums(arr);

    for (int i = 0; i < res_nums.size(); i++){
            std::cout << res_nums[i] << std::endl;
    }
}