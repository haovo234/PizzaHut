#pragma once
#include "Pizza.h"

namespace Pizza {
class Chicken : public ToppingDecorator {
public:
    Chicken(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Chicken";
    }
    double cost() const override {
        return pizzaBase->cost() + 2.5;
    }
};
}
