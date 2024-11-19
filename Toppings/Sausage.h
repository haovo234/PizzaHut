#pragma once
#include "Pizza.h"

namespace Pizza {
class Sausage : public ToppingDecorator {
public:
    Sausage(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Sausage";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.5;
    }
};
}
