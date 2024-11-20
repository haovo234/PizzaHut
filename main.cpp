#include "PizzaHut.h"

int main() {
    vector<shared_ptr<Pizza::Pizza>> pizzaList;
    bool running = true;
    createAvailablePizza(pizzaList);

    while (running) {
        showMenu();
        int choice;
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1: {
                showAvailablePizzas();
                int pizzaChoice;
                cout << "Choose a pizza (1-6): ";
                cin >> pizzaChoice;

                shared_ptr<Pizza::Pizza> pizza;

                switch (pizzaChoice) {
                    case 1:
                        pizza = pizzaList[0]; 
                        break;
                    case 2:
                        pizza = pizzaList[1]; 
                        break;
                    case 3:
                        pizza = pizzaList[2]; 
                        break;
                    case 4:
                        pizza = pizzaList[3]; 
                        break;
                    case 5:
                        pizza = pizzaList[4];
                        break;
                    case 6:
                        pizza = pizzaList[5]; 
                        break;
                    default:
                        cout << "Invalid selection!" << endl;
                        continue;
                }

                cout << "Description: " << pizza->getDescription() << " | Price: $" << pizza->cost() << endl;
                break;
            }

            case 2: {
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
                pizzaList.push_back(pizza);
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
