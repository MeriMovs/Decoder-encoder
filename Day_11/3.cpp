/*   Շրջել զանգվածը օգտագործելով stack   */
#include <iostream>
#include <stack>

int* reverse(int arr[], int size){
    std::stack<int> stack;
    for(int e = 0; e < size; e++){
        stack.push(arr[e]);
    }
    for(int e = 0; e < size; e++){
       arr[e] = stack.top();
       stack.pop();
    }
    return arr;
}

void print(int* arr, int size){
    for(int e = 0; e < size; e++){
       std::cout << arr[e] << " ";
    } std::cout << std::endl;
}

int main(){
    int size = 5;
    int* arr = new int[size]{1, 2, 3, 4, 5};

    print(arr, size);
    reverse(arr, size);
    print(arr, size);
    
    delete arr;
}