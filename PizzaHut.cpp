    #include "PizzaHut.h"
    #include <iostream>
    #include <vector>
    #include <memory>
    using namespace std;
void showMenu() {
    cout << "\n=== Menu ===" << endl;
    cout << "1. Choose from available pizzas" << endl;
    cout << "2. Customize your pizza with toppings" << endl;
    cout << "0. Exit" << endl;
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
void createAvailablePizza(vector<shared_ptr<Pizza::Pizza>> &pizzaList) {
    shared_ptr<Pizza::Pizza> OceanDelight = make_shared<Pizza::PlainPizza>();
   
    OceanDelight = make_shared<Pizza::Crab>(OceanDelight); 
    OceanDelight = make_shared<Pizza::BellPepper>(OceanDelight);
    OceanDelight = make_shared<Pizza::Cheese>(OceanDelight);
    OceanDelight = make_shared<Pizza::Squid>(OceanDelight);
    OceanDelight = make_shared<Pizza::Pineapple>(OceanDelight);
     OceanDelight->setName("Ocean Delight");
    pizzaList.push_back(OceanDelight);


    shared_ptr<Pizza::Pizza> Pepperoni = make_shared <Pizza::PlainPizza>();
    
    Pepperoni = make_shared <Pizza::Pepperoni>(Pepperoni);
    Pepperoni = make_shared <Pizza::Pepperoni>(Pepperoni);
    Pepperoni = make_shared <Pizza::Cheese>(Pepperoni);
    Pepperoni -> setName("Pepperoni Pizza");
    pizzaList.push_back(Pepperoni);

    shared_ptr<Pizza::Pizza> DoubleSeafoodBlackPepperPizza = make_shared <Pizza::PlainPizza>();
    
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Shrimp>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Shrimp>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Squid>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Squid>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Crab>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Pineapple>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::BlackPepperSauce>(DoubleSeafoodBlackPepperPizza);
    Pepperoni -> setName("Double Seafood Black Pepper");
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
    VeggieSupreme -> setName ("Veggie Supreme");
    pizzaList.push_back(VeggieSupreme);

    shared_ptr <Pizza::Pizza> CheesyChicken = make_shared <Pizza::PlainPizza>();
   
    CheesyChicken = make_shared<Pizza::Chicken>(CheesyChicken);
    CheesyChicken = make_shared<Pizza::Cheese>(CheesyChicken);
    CheesyChicken = make_shared<Pizza::Mushrooms>(CheesyChicken);
    CheesyChicken = make_shared<Pizza::Onion>(CheesyChicken);
    CheesyChicken -> setName("Cheesy Chicken");
    pizzaList.push_back(CheesyChicken);

    shared_ptr <Pizza::Pizza> KoreanBBQSauce = make_shared <Pizza::PlainPizza>();
    
    KoreanBBQSauce = make_shared<Pizza::Beef>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::Pineapple>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::BBQSauce>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::SpicySauce>(KoreanBBQSauce);
    KoreanBBQSauce -> setName("Korean BBQ Sauce");
    pizzaList.push_back(KoreanBBQSauce);

}
void showAvailablePizzas(const vector<shared_ptr<Pizza::Pizza>>& pizzaList) {
    cout << "\n=== Available Pizzas ===" << endl;
    for (size_t i = 0; i < pizzaList.size(); ++i) {
        cout << i + 1 << ". " << pizzaList[i]->getName() << endl;
    }
}

void handleChoosePizza(const vector<shared_ptr<Pizza::Pizza>>& pizzaList) {
    showAvailablePizzas(pizzaList);
    int pizzaChoice;
    cout << "Choose a pizza (1-" << pizzaList.size() << "): ";
    cin >> pizzaChoice;

    if (pizzaChoice >= 1 && pizzaChoice <= static_cast<int>(pizzaList.size())) {
        shared_ptr<Pizza::Pizza> chosenPizza = pizzaList[pizzaChoice - 1];
        cout << "Description: " << chosenPizza->getDescription()
             << " | Price: $" << chosenPizza->cost() << endl;
    } else {
        cout << "Invalid selection!" << endl;
    }
}

void handleCustomizePizza() {
    shared_ptr<Pizza::Pizza> customPizza = make_shared<Pizza::PlainPizza>();
    cout << "\nStarting with a plain pizza." << endl;

    bool addingToppings = true;
    while (addingToppings) {
        showToppings();
        int toppingChoice;
        cout << "Choose a topping (1-20, or 0 to finish): ";
        cin >> toppingChoice;

        switch (toppingChoice) {
            case 1: customPizza = make_shared<Pizza::BBQSauce>(customPizza); break;
            case 2: customPizza = make_shared<Pizza::TomatoSauce>(customPizza); break;
            case 3: customPizza = make_shared<Pizza::BlackPepperSauce>(customPizza); break;
            case 4: customPizza = make_shared<Pizza::SpicySauce>(customPizza); break;
            case 5: customPizza = make_shared<Pizza::GarlicSauce>(customPizza); break;
            case 6: customPizza = make_shared<Pizza::Beef>(customPizza); break;
            case 7: customPizza = make_shared<Pizza::Chicken>(customPizza); break;
            case 8: customPizza = make_shared<Pizza::Shrimp>(customPizza); break;
            case 9: customPizza = make_shared<Pizza::Squid>(customPizza); break;
            case 10: customPizza = make_shared<Pizza::Crab>(customPizza); break;
            case 11: customPizza = make_shared<Pizza::Pepperoni>(customPizza); break;
            case 12: customPizza = make_shared<Pizza::Sausage>(customPizza); break;
            case 13: customPizza = make_shared<Pizza::Cheese>(customPizza); break;
            case 14: customPizza = make_shared<Pizza::Pineapple>(customPizza); break;
            case 15: customPizza = make_shared<Pizza::Tomato>(customPizza); break;
            case 16: customPizza = make_shared<Pizza::CherryTomato>(customPizza); break;
            case 17: customPizza = make_shared<Pizza::Mushrooms>(customPizza); break;
            case 18: customPizza = make_shared<Pizza::Onion>(customPizza); break;
            case 19: customPizza = make_shared<Pizza::Olives>(customPizza); break;
            case 20: customPizza = make_shared<Pizza::BellPepper>(customPizza); break;
            case 0: addingToppings = false; break;
            default: cout << "Invalid selection!" << endl; break;
        }
    }

    cout << "Description: " << customPizza->getDescription()
         << " | Price: $" << customPizza->cost() << endl;
}

int main() {
    vector<shared_ptr<Pizza::Pizza>> pizzaList;
    createAvailablePizza(pizzaList);

    bool running = true;
    while (running) {
        showMenu();
        int choice;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: handleChoosePizza(pizzaList); break;
            case 2: handleCustomizePizza(); break;
            case 0:
                running = false;
                cout << "Thank you for using the program!" << endl;
                break;
            default:
                cout << "Invalid selection!" << endl;
                break;
        }
    }
    return 0;
}
