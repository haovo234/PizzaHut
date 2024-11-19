#pragma once
#include "Pizza.h"

namespace Pizza {
class Olives : public ToppingDecorator {
public:
    Olives(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Olive";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.0;
    }
};
}
