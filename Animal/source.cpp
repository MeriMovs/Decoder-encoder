#include <iostream>

class Animal
{
    protected:
        std::string m_name;
        int m_id;
        std::string m_Animal_sound;
        std::string m_Animal_feed;
        std::string m_Animal_color;
        std::string m_Animal_family;

    public:
        void toFeed(std::string);
        void makeSound(std::string);


        void set_Animal_id(int);
        int get_Animal_id();

        void set_Animal_name(std::string);
        std::string get_Animal_name();

        void set_Animal_color(std::string);
        std::string get_Animal_color();

        void set_Animal_family(std::string);
        std::string get_Animal_family();
};

class Dog : public Animal
{

};
class Cat : public Animal
{

};

void Animal::toFeed(std::string feed){
            m_Animal_feed = feed;
            std::cout << "Animal to feed "<< m_Animal_feed << std::endl;
        }
void Animal::makeSound(std::string sound){
            m_Animal_sound = sound;
            std::cout << "Animal make sound " << m_Animal_sound << std::endl;
        }
void Animal::set_Animal_id(int id){
            m_id = id;
        }
int Animal::get_Animal_id(){
            std::cout << "Get Animal id: " << m_id << std::endl; 
            return m_id;
        }
void Animal::set_Animal_name(std::string name){
            m_name = name;
        }
std::string Animal:: get_Animal_name(){
            std::cout << "Get Animal name: " << m_name << std::endl; 
            return m_name;
        }
void Animal::set_Animal_color(std::string color){
            m_Animal_color = color;
        }
std::string Animal:: get_Animal_color(){
            std::cout << "Get Animal color: " << m_Animal_color << std::endl; 
            return m_Animal_color;
        }
void Animal::set_Animal_family(std::string family){
            m_Animal_family = family;
        }
std::string Animal::get_Animal_family(){
            std::cout << "Get Animal family: " << m_Animal_family << std::endl; 
            return m_Animal_family;
        }

int main(){
    Dog Sharik;
    Sharik.toFeed("flower");
    Sharik.makeSound("haf-haf");

    Sharik.set_Animal_id(5);
    Sharik.get_Animal_id();

    Sharik.set_Animal_name("Jack");
    Sharik.get_Animal_name();

    Sharik.set_Animal_color("brown");
    Sharik.get_Animal_color();

    Sharik.set_Animal_family("retriever");
    Sharik.get_Animal_family();


    std::cout << "\n\n";

    Cat Murzik;
    Murzik.toFeed("nerves");
    Murzik.makeSound("myau");

    Murzik.set_Animal_id(2);
    Murzik.get_Animal_id();

    Murzik.set_Animal_name("Murzik");
    Murzik.get_Animal_name();

    Murzik.set_Animal_color("gray");
    Murzik.get_Animal_color();

    Murzik.set_Animal_family("leopard");
    Murzik.get_Animal_family();

}