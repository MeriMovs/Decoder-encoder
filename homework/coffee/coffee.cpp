/*Նկարագրել CoffeeMachine դաս, որը ստեղծման պահին կընդունի երկու նույնաչափ զանգված,
 մեկում ապրանքների ցուցակը, մյուսում` համապատասխան գնացուցակը։ 
 Դասը պետք է ունենա գնացուցակը տպելու "printPriceList" անդամ ֆունկցիա (member function):
Դասի հիմնական գործունեությունը լինելու է ընդունել պատվեր, ստուգել պատվերի համապատասխանությունը
 (ապրանքը գոյություն ունի, գումարը բավարարում է թե ոչ)
և վերադարձնել ապրանքն ու մանրը։ Ապրանքը նկարագրելու համար բավարար է նշել միայն ապրանքի անունը։
Գնման և մանրի վերադարձման փոխանակումները իրագործել օգտագործելով struct:*/

#include <iostream>

class CoffeeMachine{
    private:
        std::string drink_list[4] = {"Milk", "Espresso", "Cappuccino", "Tea"};
        int price_list[4] = {200, 300, 400, 100};


    public:
        void printPriceList(){
            std::cout << "    OUR PRODUCTS" << std::endl;
            for( int c = 0; c < 4; c++){
                std::cout << c+1 << " " << drink_list[c] << "   " << price_list[c] << std::endl;
            }std::cout << std::endl;
        }

        int order(std::string drink, int price){
            for (int m = 0; m < 4; m++){
                if(drink == drink_list[m]){
                    if(price > price_list[m]){
                        std::cout << "\nYor change: " << price - price_list[m] << "\nThank you "<< std::endl;
                    } else if(price < price_list[m]){
                        std::cout << "\nYou don't have enough money to buy it, please add: " <<  price_list[m] - price << std::endl;
                    } else{
                        std::cout << "\nThank you " << std::endl;
                    }
                    return 1;
                } else if(m == 3){
                    std::cout << "Please select something from the list" << std::endl;
                }
            }
                    return 0;
        }
};



int main(){
    CoffeeMachine obj;
    obj.printPriceList();

    std::string drink; int money;
    std::cout << "Enter the product name: ";
    std::cin >> drink;
    std::cout << "Enter the money: ";
    std::cin >> money;
    obj.order(drink, money);

    return 1;
}