#include <iostream>
#include <vector>
#include <unordered_map>

void foo(int arr[],int size, int target){
    for(int e = 0; e < size; e++){
        for(int j = e + 1; j < size; j++){
            if(arr[e] + arr[j] == target){
                std::cout << e << "  " << j << std::endl;
            }
        }
    }
}


void foo_map(int arr[],int size, int target) {
        std::unordered_map<int, int> map;
        
        for(int e = 0; e < size; e++){
            if (map.find(target-arr[e]) != map.end()) 
                std::cout << map[target-arr[e]] << "  " << e << std::endl;
            map[arr[e]]=e;
        }
    }

int main(){
    int target = 6;
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 7};
    foo(arr, size, target);
    foo_map(arr, size, target);
}