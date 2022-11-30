//copy and parametered կոնստրուկտորներներ չկան(


#include <iostream>

template <class T>
class Vector{
    private:
        T* arr;
        int capacity;
        int current = 1;

    public:
        Vector(){
            arr = new T[1];
            capacity = 1;
            current = 0;

        }

        ~Vector(){
            delete[] arr;
        }

        void push_back(T data){
            if (current == capacity) {
                T* temp = new T[2 * capacity];
 
                for (int i = 0; i < capacity; i++) {
                    temp[i] = arr[i];
                }
 
            delete[] arr;
            capacity *= 2;
            arr = temp;
            }
 
            arr[current] = data;
            current++;
        }



        void print(){
            for (int e = 0; e < current; e++) {
                std::cout << arr[e] << " ";
            }std::cout << std::endl;
        }
        void pop_back() { current--; }
        int size() { return current; }
        int getcapacity() { return capacity; }
        bool empty(){
            if (current == 0){
                return true;
            } else {
                return false;
            }
        }
        void clear(){
            current = 0;
        }

        T& operator[](int index);
        bool operator==(const Vector<T>& other);
        void operator=(const Vector<T>& other);


};


template <class T>
bool Vector<T>::operator==(const Vector<T>& other){  
    if (other.size == this -> size){
        for(int i = 0; i < other.size; i++){
            if(other.arr[i] != this ->arr[i]){
                return false;
            }
        }
        return true;
    } else{
        return false;
    }
}

template <class T>
void Vector<T>::operator=(const Vector<T>& other){  
    this -> size = other.size;
    for(int e = 0; e < other.size; e++){
        this -> arr[e] = other.arr[e];
    }
}

template <class T>
T& Vector<T>::operator[](int index)
{
    return arr[index];
}

int main(){
    Vector<int> obj;
    obj.push_back(2);
    obj.push_back(7);
    obj.push_back(8);
    obj.pop_back();
    obj.print();

    if(obj.empty()){
        std::cout << "obj is empty" << std::endl;
    } else{
        std::cout << "obj is not empty" << std::endl;
    }

    obj.clear();

    if(obj.empty()){
        std::cout << "obj is empty" << std::endl;
    } else{
        std::cout << "obj is not empty" << std::endl;
    }
}