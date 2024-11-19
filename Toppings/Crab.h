#pragma once
#include "Pizza.h"

namespace Pizza {
class Crab : public ToppingDecorator {
public:
    Crab(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Crab";
    }
    double cost() const override {
        return pizzaBase->cost() + 3.5;
    }
};
}
