#pragma once
#include "Pizza.h"

namespace Pizza {
class Pepperoni : public ToppingDecorator {
public:
    Pepperoni(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Pepperoni";
    }
    double cost() const override {
        return pizzaBase->cost() + 2.0;
    }
};
}
