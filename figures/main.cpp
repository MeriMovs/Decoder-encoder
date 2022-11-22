#include <iostream>
#include <math.h>

/*Գրել երկրաչափական պատկերների հիերարխիա, որը կնկարագրի եռանկյուն, ուղղանկյուն, քառակուսի, էլիպս և շրջան դասերը։
Յուրաքանչյուր դասը պետք է ունենա պարագիծ և մակերես հաշվող ֆունկցիաներ*/
class Figures{
    public:
        Figures(int* a)
        : m_arr_sides(a)
        , m_side(0)
        {
            std::cout << "Figures constructor" << std::endl;
        }
        Figures(int a)
        : m_side(a)
        , m_arr_sides(nullptr)
        {
            std::cout << "Figures constructor" << std::endl;
        }


        ~Figures(){
            delete m_arr_sides;
            std::cout << "Figures ~destructor" << std::endl;
        }
    protected:
        int* m_arr_sides;
        int m_side;
};

class Triangle : public Figures{
    public:
        Triangle(int* a)
        : Figures(a)
        {
            std::cout << "Triangle constructor" << std::endl;
        }
        ~Triangle(){
            // delete m_arr_angles;
            std::cout << "Triangle ~destructor" << std::endl;
        }

        void get_triangle_perimeter(){
            int perimeter = 0;
            for (int i = 0; i < 3; i++){
                perimeter+= m_arr_sides[i];
            }
            std::cout << "--- get_triangle_perimeter ---  " << perimeter << std::endl;
        }
        
        void get_triangle_area(){

            int s=(m_arr_sides[0]+m_arr_sides[1]+m_arr_sides[2])/2;
            int area=sqrt(s*(s-m_arr_sides[0])*(s-m_arr_sides[1])*(s-m_arr_sides[2]));
            std::cout << "--- get_triangle_area ---  " << area  << std::endl;
        }
};

class Square : public Figures{
    public:
        Square(int a)
        : Figures(a)
        {
            std::cout << "Square constructor" << std::endl;
        }
        ~Square(){
            // delete m_angles;
            std::cout << "Square ~destructor" << std::endl;
        }

        void get_square_perimeter(){
            int perimeter = m_side * 4;
            std::cout << "--- get_square_perimeter ---  " << perimeter << std::endl;
        }
        
        void get_square_area(){

            int area = m_side * m_side;
            std::cout << "--- get_square_area ---  " << area  << std::endl;
        }
};


class Rectangle : public Figures{
    public:
        Rectangle(int* a)
        : Figures(a)
        {
            std::cout << "Rectangle constructor" << std::endl;
        }
        ~Rectangle(){
            // delete m_angles;
            std::cout << "Rectangle ~destructor" << std::endl;
        }

        void get_rectangle_perimeter(){
            int perimeter = (m_arr_sides[0] + m_arr_sides[1])*2;
            std::cout << "--- get_rectangle_perimeter ---  " << perimeter << std::endl;
        }
        
        void get_rectangle_area(){

            int area = m_arr_sides[0] * m_arr_sides[1];
            std::cout << "--- get_rectangle_area ---  " << area  << std::endl;
        }
};




int main(){
    int* a = new int[3]{40, 50, 60};
    Triangle t(a);
    t.get_triangle_perimeter();
    t.get_triangle_area();
    delete a;
    std::cout << "\n\n\n";

    Square s(5);
    s.get_square_perimeter();
    s.get_square_area();
    std::cout << "\n\n\n";


    int* b = new int[2]{4, 6};
    Rectangle r(b);
    r.get_rectangle_perimeter();
    r.get_rectangle_area();
    delete b;


}