#pragma once
#include "Pizza.h"

namespace Pizza {
class GarlicSauce : public ToppingDecorator {
public:
    GarlicSauce(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Garlic Sauce";
    }
    double cost() const override {
        return pizzaBase->cost() + 0.5;
    }
};
}
