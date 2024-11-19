#pragma once
#include "Pizza.h"

namespace Pizza {
class SpicySauce : public ToppingDecorator {
public:
    SpicySauce(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Spicy Sauce";
    }
    double cost() const override {
        return pizzaBase->cost() + 0.9;
    }
};
}
