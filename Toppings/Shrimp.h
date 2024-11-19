#pragma once
#include "Pizza.h"

namespace Pizza {
class Shrimp : public ToppingDecorator {
public:
    Shrimp(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Shrimp";
    }
    double cost() const override {
        return pizzaBase->cost() + 2.8;
    }
};
}
