#pragma once 
#include "Toppings/Headers.h"
using namespace std;
void showMenu(); 
 void showToppings();
void showAvailablePizzas(const vector<shared_ptr<Pizza::Pizza>>& pizzaList);

void handleChoosePizza(const vector<shared_ptr<Pizza::Pizza>>& pizzaList);

void handleCustomizePizza();
void createAvailablePizzas();