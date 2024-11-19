#pragma once
#include "Pizza.h"

namespace Pizza {
class Mushrooms : public ToppingDecorator {
public:
    Mushrooms(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Mushroom";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.0;
    }
};
}
