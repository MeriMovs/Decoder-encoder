/*Իմպլենենտացնել array class  template֊ը և իրականացնել հետևյալ ֆունկցիոնալությունը։
1)  Կոնստրուկտոր առանց պարամետրերի ։ ստեղծում է դատարկ զանգված
2) Կոնստրուկտոր, որը որպես պարամետր ստանում է  unsigned int n ։ ստեցծում է զանգվախ n 
                            քանակի էլեմենտներով և տալիս է էլեմենտներին default արժեք։
3) operator==
4) operator=
5) size() ֆունկցիա որը վերադարձնում է զանգվածի չափը;

գրել main() ֆունկիա որտեղ կանչվել են բոլոր վերոնշյալ ֆունկցիանները և ստուգվել են դրանց արդյունքները։*/

#include <iostream>

template <class T>
class Array{
    protected:
    T* arr = {};
    int size = 0;

    public:
        Array(){ T arr[0] = {}; }
        Array(unsigned int n)
        {
            size = n;
            arr = new T[size]{};
        }
        ~Array()
        {
            delete [] arr;
        }

        int m_size(){
            return size;
        }
        void print();
        T& operator[](int index);
        bool operator==(const Array<T>& other);
        void operator=(const Array<T>& other);
  
};

template <class T>
void Array<T>::print(){
    for(int e = 0; e < size; e++){
        std::cout << arr[e] << "  ";
    } std::cout << std::endl;
}

template <class T>
bool Array<T>::operator==(const Array<T>& other){  
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
void Array<T>::operator=(const Array<T>& other){  
    this -> size = other.size;
    for(int e = 0; e < other.size; e++){
        this -> arr[e] = other.arr[e];
    }
}

template <class T>
T& Array<T>::operator[](int index)
{
    return arr[index];
}



template <typename T>
void test(){
    Array<T> obj1(5);
    Array<T> obj2(4);

    if (obj1 == obj2){
        std::cerr << " --- ERROR ---" << std::endl;
    } else{
        std::clog << " --- PASS ---" << std::endl;
    }

    obj2[3] = 8;
    obj1 = obj2;

    if (obj1 == obj2){
        std::clog << " --- PASS ---" << std::endl;
    } else{
        std::cerr << " --- ERROR ---" << std::endl;
    }

}



int main(){
    unsigned int n = 5;

    Array<int> obj1(n);
    Array<int> obj2(n);

    obj1.print();
    obj2.print();

    std::cout << "obj1 size = " << obj1.m_size() << std::endl;
    std::cout << "obj2 size = " << obj2.m_size() << std::endl;

    if(obj1 == obj2){
        std::cout << "obj1 == obj2" << std::endl;
    } else{
        std::cout << "obj1 != obj2" << std::endl;

    }

    obj1[1] = 8;
    if(obj1 == obj2){
        std::cout << "obj1 == obj2" << std::endl;
    } else{
        std::cout << "obj1 != obj2" << std::endl;

    }


    Array<int> obj3(4);
    obj3.print();
    obj3 = obj2;
    obj3[3] = 2;
    obj3.print();
    

    test<int>();
    test<std::string>();

}
