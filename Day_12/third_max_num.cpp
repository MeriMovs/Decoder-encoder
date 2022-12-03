/* third max, or max */
#include <iostream>
#include <vector>
#include <set>

int foo(std::vector<int> arr){
    std::set<int> set;
    for(auto a: arr){
        set.insert(a);
    }
    if(set.size() > 3){
        auto it = set.end();
        it--;
        it--;
        return *it;
    } else if(set.size() == 3){

        return *set.begin();
    } else if(set.size() < 3){

        return *set.end();
    }
    return 0;
}

int main(){
    std::vector<int> arr1 = {2, 2, 1, 3};
    std::vector<int> arr2 = {1, 3, 2};
    std::vector<int> arr3 = {1, 2};

    std::cout << foo(arr1) << std::endl;
    std::cout << foo(arr2) << std::endl;
    std::cout << foo(arr3) << std::endl;
}