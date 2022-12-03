/* Նկարագրել Set template կլասսը։*/
#include <iostream>
#include <vector>
#include <algorithm>


template <class T>
class Set{
    private:
        std::vector<T> set;
        int size = 0;

    public:
        Set(){}

        void insert(T value){
            set.push_back(value);

            std::sort(set.begin(), set.end());

            size++;

        }

        void remove(T value){
            for(int e = 0; e < size;e++){
                if(set[e] == value){
                    set.erase(set.begin() + e);
                    
                }
            }
            size--;
        }

        void search(T value){
            for(int e = 0; e < size;e++){
                if(set[e] == value){
                    std::cout << "index: " << e << "  value: " << set[e] << std::endl;

                }
            }
        }

        void print(){
            for(int e = 0; e < size;e++){
                std::cout << set[e] << "  ";
            } std::cout << std::endl;
        }
};




int main(){
    Set<int> obj;
    obj.insert(1);
    obj.insert(3);
    obj.insert(2);

    obj.print();
    std::cout << std::endl;


    obj.remove(2);
    obj.print();

    std::cout << std::endl;

    obj.search(1);
}