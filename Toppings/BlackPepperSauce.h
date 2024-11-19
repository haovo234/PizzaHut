#pragma once
#include "Pizza.h"

namespace Pizza {
class BlackPepperSauce : public ToppingDecorator {
public:
    BlackPepperSauce(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Black Pepper Sauce";
    }
    double cost() const override {
        return pizzaBase->cost() + 0.7;
    }
};
}
