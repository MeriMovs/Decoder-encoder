/* Նկարագրել Map template կլասսը։*/
#include <iostream>
#include <vector>
#include <algorithm>


template <class T, class U>
class Map{
    private:
        std::vector< std::pair<T,U>> map;
        int index = 0;

    public:
        Map(){}

        void insert(T first, U second){
            map.push_back(std::make_pair(first, second));
            std::sort(map.begin(), map.end());
            index++;

        }

        void clear(){
            map.clear();
            index = 0;
        }

        void remove(T m_first){
            for(int e = 0; e < index;e++){
                if(map[e].first == m_first){
                    map.erase(map.begin() + e);
                }
            }
            index--;
        }

        void search(T m_first){
            for(int e = 0; e < index;e++){
                if(map[e].first == m_first){
                    std::cout << "index: " << e << std::endl;
                    std::cout << map[e].first << "  " << map[e].second << std::endl;

                }
            }
        }

        void print(){
            for(int e = 0; e < index;e++){
                std::cout << map[e].first << "  " << map[e].second << std::endl;
            }
        }
};




int main(){
    Map<int, std::string> obj;
    obj.insert(1, "Hello");
    obj.insert(3, "!");
    obj.insert(2, "world");

    obj.print();
    std::cout << std::endl;


    obj.remove(2);
    obj.print();

    std::cout << std::endl;

    obj.search(1);
}