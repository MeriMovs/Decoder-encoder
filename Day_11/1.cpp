/*Իմպլեմենտացնել template stack, որը պահում է 
size(), top(), pop(), push(), empty() ֆունկցաները
(իրականցնել օգտվելով c ֊ ական array ֊ ից)։*/

#include <iostream>

template <class T>
class Stack{
    private:
        int m_size = 0;
        T arr[10];
    
    public:
        Stack(){ 
            for (int i = 0; i < 10; i++) {
                arr[i] = 0;
            } 
        }

        int size(){ return m_size; }
        T top(){ return arr[m_size-1]; }
        void pop(){ m_size--; }
        bool empty(){ return (m_size == 0) ? true : false; }
        void push(T val){
            m_size++;
            arr[m_size-1] = val;
        }
};


bool test(){
    Stack<int> obj;
    if (obj.size() != 0)
        return false;
    if(!obj.empty())
        return false;
    obj.push(7);
    obj.push(8);
    obj.push(9);

    if (obj.size() != 3)
        return false;
    if (obj.top() != 9)
        return false;

    obj.pop();
    if (obj.size() != 2)
        return false;
    if (obj.top() != 8)
        return false;

    if(obj.empty())
        return false;
    return true;
}

int main(){
    if(test()){
        std::cout << "Everythink works correctly" << std::endl;
    } else{
        std::cout << "There is an error here" << std::endl;
    }
}