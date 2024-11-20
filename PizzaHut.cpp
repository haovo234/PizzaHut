#include "PizzaHut.h"
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

vector<shared_ptr<Pizza::Pizza>> pizzaList;

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

void createAlreadyPizza() {
    // Ocean Delight Pizza
    shared_ptr<Pizza::Pizza> OceanDelight = make_shared<Pizza::PlainPizza>();
    OceanDelight = make_shared<Pizza::Crab>(OceanDelight);
    OceanDelight = make_shared<Pizza::BellPepper>(OceanDelight);
    OceanDelight = make_shared<Pizza::Cheese>(OceanDelight);
    OceanDelight = make_shared<Pizza::Squid>(OceanDelight);
    OceanDelight = make_shared<Pizza::Pineapple>(OceanDelight);
    pizzaList.push_back(OceanDelight);

    // Pepperoni Pizza
    shared_ptr<Pizza::Pizza> Pepperoni = make_shared<Pizza::PlainPizza>();
    Pepperoni = make_shared<Pizza::Pepperoni>(Pepperoni);
    Pepperoni = make_shared<Pizza::Pepperoni>(Pepperoni);
    Pepperoni = make_shared<Pizza::Cheese>(Pepperoni);
    pizzaList.push_back(Pepperoni);

    // Double Seafood Black Pepper Pizza
    shared_ptr<Pizza::Pizza> DoubleSeafoodBlackPepperPizza = make_shared<Pizza::PlainPizza>();
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Shrimp>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Shrimp>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Squid>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Squid>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Crab>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::Pineapple>(DoubleSeafoodBlackPepperPizza);
    DoubleSeafoodBlackPepperPizza = make_shared<Pizza::BlackPepperSauce>(DoubleSeafoodBlackPepperPizza);
    pizzaList.push_back(DoubleSeafoodBlackPepperPizza);

    // Veggie Supreme Pizza
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

    // Cheesy Chicken Pizza
    shared_ptr<Pizza::Pizza> CheesyChicken = make_shared<Pizza::PlainPizza>();
    CheesyChicken = make_shared<Pizza::Chicken>(CheesyChicken);
    CheesyChicken = make_shared<Pizza::Cheese>(CheesyChicken);
    CheesyChicken = make_shared<Pizza::Mushrooms>(CheesyChicken);
    CheesyChicken = make_shared<Pizza::Onion>(CheesyChicken);
    pizzaList.push_back(CheesyChicken);

    // Korean BBQ Sauce Pizza
    shared_ptr<Pizza::Pizza> KoreanBBQSauce = make_shared<Pizza::PlainPizza>();
    KoreanBBQSauce = make_shared<Pizza::Beef>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::Pineapple>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::BBQSauce>(KoreanBBQSauce);
    KoreanBBQSauce = make_shared<Pizza::SpicySauce>(KoreanBBQSauce);
    pizzaList.push_back(KoreanBBQSauce);
}

int main() {
    vector<shared_ptr<Pizza::Pizza>> pizzas;
    bool running = true;

    // Predefined pizzas
    createAlreadyPizza();

    while (running) {
        showMenu();
        int choice;
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore();  // To discard the newline character in the input buffer

        switch (choice) {
            case 1: {
                // Choose a pre-existing pizza
                showAvailablePizzas();
                int pizzaChoice;
                cout << "Choose a pizza (1-6): ";
                cin >> pizzaChoice;

                shared_ptr<Pizza::Pizza> pizza;

                switch (pizzaChoice) {
                    case 1:
                        pizza = pizzaList[0]; // Ocean Delight Pizza
                        break;
                    case 2:
                        pizza = pizzaList[1]; // Pepperoni Pizza
                        break;
                    case 3:
                        pizza = pizzaList[2]; // Double Seafood Black Pepper Pizza
                        break;
                    case 4:
                        pizza = pizzaList[3]; // Veggie Supreme Pizza
                        break;
                    case 5:
                        pizza = pizzaList[4]; // Cheesy Chicken Pizza
                        break;
                    case 6:
                        pizza = pizzaList[5]; // Korean BBQ Sauce Pizza
                        break;
                    default:
                        cout << "Invalid selection!" << endl;
                        continue;
                }

                cout << "Description: " << pizza->getDescription() << " | Price: $" << pizza->cost() << endl;
                pizzas.push_back(pizza);
                break;
            }

            case 2: {
                // Customize a pizza with toppings
                cout << "\nChoose a basic pizza (Plain Pizza) to start." << endl;
                shared_ptr<Pizza::Pizza> pizza = make_shared<Pizza::PlainPizza>();

                bool addingToppings = true;
                while (addingToppings) {
                    showToppings();
                    int toppingChoice;
                    cout << "Choose a topping (1-20, or 0 to finish): ";
                    cin >> toppingChoice;

                    switch (toppingChoice) {
                        case 1:
                            pizza = make_shared<Pizza::BBQSauce>(pizza);
                            break;
                        case 2:
                            pizza = make_shared<Pizza::TomatoSauce>(pizza);
                            break;
                        case 3:
                            pizza = make_shared<Pizza::BlackPepperSauce>(pizza);
                            break;
                        case 4:
                            pizza = make_shared<Pizza::SpicySauce>(pizza);
                            break;
                        case 5:
                            pizza = make_shared<Pizza::GarlicSauce>(pizza);
                            break;
                        case 6:
                            pizza = make_shared<Pizza::Beef>(pizza);
                            break;
                        case 7:
                            pizza = make_shared<Pizza::Chicken>(pizza);
                            break;
                        case 8:
                            pizza = make_shared<Pizza::Shrimp>(pizza);
                            break;
                        case 9:
                            pizza = make_shared<Pizza::Squid>(pizza);
                            break;
                        case 10:
                            pizza = make_shared<Pizza::Crab>(pizza);
                            break;
                        case 11:
                            pizza = make_shared<Pizza::Pepperoni>(pizza);
                            break;
                        case 12:
                            pizza = make_shared<Pizza::Sausage>(pizza);
                            break;
                        case 13:
                            pizza = make_shared<Pizza::Cheese>(pizza);
                            break;
                        case 14:
                            pizza = make_shared<Pizza::Pineapple>(pizza);
                            break;
                        case 15:
                            pizza = make_shared<Pizza::Tomato>(pizza);
                            break;
                        case 16:
                            pizza = make_shared<Pizza::CherryTomato>(pizza);
                            break;
                        case 17:
                            pizza = make_shared<Pizza::Mushrooms>(pizza);
                            break;
                        case 18:
                            pizza = make_shared<Pizza::Onion>(pizza);
                            break;
                        case 19:
                            pizza = make_shared<Pizza::Olives>(pizza);
                            break;
                        case 20:
                            pizza = make_shared<Pizza::BellPepper>(pizza);
                            break;
                        case 0:
                            addingToppings = false;
                            break;
                        default:
                            cout << "Invalid selection!" << endl;
                            break;
                    }
                }

                cout << "Description: " << pizza->getDescription() << " | Price: $" << pizza->cost() << endl;
                pizzas.push_back(pizza);
                break;
            }

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
