#pragma once 
#include "Toppings/Headers.h"
#include <vector>
using namespace std;
void showMenu();
void showAvailablePizzas();
void showToppings();
void createAvailablePizza(vector<shared_ptr<Pizza::Pizza>> &pizzaList);