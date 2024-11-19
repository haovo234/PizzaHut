#pragma once
#include "Pizza.h"

namespace Pizza {
class Cheese : public ToppingDecorator {
public:
    Cheese(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Cherry Tomato";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.2;
    }
};
}
