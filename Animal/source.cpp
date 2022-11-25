#include <iostream>

class Animal
{
    protected:
        std::string m_name;
        int m_id;
        std::string m_Animal_sound;
        std::string m_Animal_feed;

    public:
        virtual void toFeed(std::string) = 0;
        virtual void makeSound(std::string) = 0;
};

class Dog : public Animal
{
    protected:
        std::string m_Dog_color;
        std::string m_Dog_family;

    public:
        void toFeed(std::string);
        void makeSound(std::string);

        void set_Dog_id(int);
        int get_Dog_id();

        void set_Dog_name(std::string);
        std::string get_Dog_name();

        void set_Dog_color(std::string);
        std::string get_Dog_color();

        void set_Dog_family(std::string);
        std::string get_Dog_family();

};


void Dog::toFeed(std::string feed){
            m_Animal_feed = feed;
            std::cout << "Dog to feed "<< m_Animal_feed << std::endl;
        }
void Dog::makeSound(std::string sound){
            m_Animal_sound = sound;
            std::cout << "Dog make sound " << m_Animal_sound << std::endl;
        }
void Dog::set_Dog_id(int id){
            m_id = id;
        }
int Dog::get_Dog_id(){
            std::cout << "Get Dog id: " << m_id << std::endl; 
            return m_id;
        }
void Dog::set_Dog_name(std::string name){
            m_name = name;
        }
std::string Dog:: get_Dog_name(){
            std::cout << "Get Dog name: " << m_name << std::endl; 
            return m_name;
        }
void Dog::set_Dog_color(std::string color){
            m_Dog_color = color;
        }
std::string Dog:: get_Dog_color(){
            std::cout << "Get Dog color: " << m_Dog_color << std::endl; 
            return m_Dog_color;
        }
void Dog::set_Dog_family(std::string family){
            m_Dog_family = family;
        }
std::string Dog::get_Dog_family(){
            std::cout << "Get Dog family: " << m_Dog_family << std::endl; 
            return m_Dog_family;
        }








class Cat : public Animal
{
    protected:
        std::string m_Cat_color;
        std::string m_Cat_family;

    public:
        void toFeed(std::string);
        void makeSound(std::string);

        void set_Cat_id(int);
        int get_Cat_id();

        void set_Cat_name(std::string);
        std::string get_Cat_name();

        void set_Cat_color(std::string);
        std::string get_Cat_color();

        void set_Cat_family(std::string);
        std::string get_Cat_family();

};


void Cat::toFeed(std::string feed){
            m_Animal_feed = feed;
            std::cout << "Cat to feed "<< m_Animal_feed << std::endl;
        }
void Cat::makeSound(std::string sound){
            m_Animal_sound = sound;
            std::cout << "Cat make sound " << m_Animal_sound << std::endl;
        }
void Cat::set_Cat_id(int id){
            m_id = id;
        }
int Cat::get_Cat_id(){
            std::cout << "Get Cat id: " << m_id << std::endl; 
            return m_id;
        }
void Cat::set_Cat_name(std::string name){
            m_name = name;
        }
std::string Cat:: get_Cat_name(){
            std::cout << "Get Cat name: " << m_name << std::endl; 
            return m_name;
        }
void Cat::set_Cat_color(std::string color){
            m_Cat_color = color;
        }
std::string Cat:: get_Cat_color(){
            std::cout << "Get Cat color: " << m_Cat_color << std::endl; 
            return m_Cat_color;
        }
void Cat::set_Cat_family(std::string family){
            m_Cat_family = family;
        }
std::string Cat::get_Cat_family(){
            std::cout << "Get Cat family: " << m_Cat_family << std::endl; 
            return m_Cat_family;
        }






int main(){
    Dog Sharik;
    Sharik.toFeed("flower");
    Sharik.makeSound("haf-haf");

    Sharik.set_Dog_id(5);
    Sharik.get_Dog_id();

    Sharik.set_Dog_name("Jack");
    Sharik.get_Dog_name();

    Sharik.set_Dog_color("brown");
    Sharik.get_Dog_color();

    Sharik.set_Dog_family("retriever");
    Sharik.get_Dog_family();


    std::cout << "\n\n";

    Cat Murzik;
    Murzik.toFeed("nerves");
    Murzik.makeSound("myau");

    Murzik.set_Cat_id(2);
    Murzik.get_Cat_id();

    Murzik.set_Cat_name("Murzik");
    Murzik.get_Cat_name();

    Murzik.set_Cat_color("gray");
    Murzik.get_Cat_color();

    Murzik.set_Cat_family("leopard");
    Murzik.get_Cat_family();

}
