#pragma once
#include "Pizza.h"

namespace Pizza {
class Onion : public ToppingDecorator {
public:
    Onion(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Onion";
    }
    double cost() const override {
        return pizzaBase->cost() + 0.75;
    }
};
}
