#pragma once 
#include "Toppings/Headers.h"
using namespace std;
vector<shared_ptr<Pizza::Pizza>> pizzaList;

void createAlreadyPizza() {
    shared_ptr<Pizza::Pizza> OceanDelight = make_shared<Pizza::PlainPizza>();
    OceanDelight = make_shared<Pizza::Crab>(OceanDelight); // Giả sử bạn có Crab topping
    OceanDelight = make_shared<Pizza::BellPepper>(OceanDelight);
    OceanDelight = make_shared<Pizza::Cheese>(OceanDelight);
    OceanDelight = make_shared<Pizza::Squid>(OceanDelight);
    OceanDelight = make_shared<Pizza::Pineapple>(OceanDelight);
    pizzaList.push_back(OceanDelight);


    shared_ptr<Pizza::Pizza> Pepperoni = make_shared <Pizza::PlainPizza>();
    Pepperoni = make_shared <Pizza::Pepperoni>(Pepperoni);
    Pepperoni = make_shared <Pizza::Pepperoni>(Pepperoni);
    Pepperoni = make_shared <Pizza::Cheese>(Pepperoni);
    pizzaList.push_back(Pepperoni);

    shared_ptr<Pizza::Pizza> DoubleSeafoodBlackPepperPizza = make_shared <Pizza::PlainPizza>();
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Shrimp>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Shrimp>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Squid>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Squid>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Crab>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Pineapple>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::BlackPepperSauce>(DoubleSeafoodBlackPepperPizza);
    pizzaList.push_back(DoubleSeafoodBlackPepperPizza);

    shared_ptr<Pizza::Pizza> VeggieSupreme = make_shared<Pizza::PlainPizza>();
    VeggieSupreme = make_shared<Pizza::TomatoSauce>(VeggieSupreme);
    VeggieSupreme = make_shared<Pizza::Olives>(VeggieSupreme);
    VeggieSupreme = make_shared<Pizza::CherryTomato>(VeggieSupreme);
    VeggieSupreme = make_shared<Pizza::Mushrooms>(VeggieSupreme);
    VeggieSupreme = make_shared<Pizza::Pineapple>(VeggieSupreme);
    VeggieSupreme = make_shared<Pizza::SweetCorn>(VeggieSupreme);
    VeggieSupreme = make_shared<Pizza::Onion>(VeggieSupreme);
    VeggieSupreme = make_shared<Pizza::Cheese>(VeggieSupreme);
    pizzaList.push_back(VeggieSupreme);

    shared_ptr <Pizza::Pizza> CheesyChicken = make_shared <Pizza::PlainPizza>();
    CheesyChicken = make_shared<Pizza::Chicken>(CheesyChicken);
      CheesyChicken = make_shared<Pizza::Cheese>(CheesyChicken);
     CheesyChicken = make_shared<Pizza::Mushrooms>(CheesyChicken);
      CheesyChicken = make_shared<Pizza::Onion>(CheesyChicken);
    pizzaList.push_back(CheesyChicken);

    shared_ptr <Pizza::Pizza> KoreanBBQSauce = make_shared <Pizza::PlainPizza>();
    KoreanBBQSauce = make_shared<Pizza::Beef>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::Pineapple>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::BBQSauce>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::SpicySauce>(KoreanBBQSauce);

}


   void showMenu() {
    cout << "\n=== Menu ===" << endl;
    cout << "1. Choose from available pizzas" << endl;
    cout << "2. Customize your pizza with toppings" << endl;
    cout << "0. Exit" << endl;
}

void showAvailablePizzas() {
    cout << "\n=== Available Pizzas ===" << endl;
    cout << "1. Ocean Delight Pizza" << endl;
    cout << "2. Pepperoni Pizza" << endl;
    cout << "3. Double Seafood Black Pepper Pizza" << endl;
    cout << "4. Veggie Supreme Pizza" << endl;
    cout << "5. Cheesy Chicken Pizza" << endl;
    cout << "6. Korean BBQ Sauce Pizza" << endl;
}

void showToppings() {
    cout << "\n=== Available Toppings ===" << endl;
    cout << "1. BBQ Sauce" << endl;
    cout << "2. Tomato Sauce" << endl;
    cout << "3. Black Pepper Sauce" << endl;
    cout << "4. Chilly Sauce" << endl;
    cout << "5. Garlic Sauce" << endl;
    cout << "6. Beef" << endl;
    cout << "7. Chicken" << endl;
    cout << "8. Shrimp" << endl;
    cout << "9. Squid" << endl;
    cout << "10. Crab" << endl;
    cout << "11. Pepperoni" << endl;
    cout << "12. Sausage" << endl;
    cout << "13. Cheese" << endl;
    cout << "14. Pineapple" << endl;
    cout << "15. Tomato" << endl;
    cout << "16. Cherry Tomato" << endl;
    cout << "17. Mushroom" << endl;
    cout << "18. Onion" << endl;
    cout << "19. Olive" << endl;
    cout << "20. Bell Pepper" << endl;
}
