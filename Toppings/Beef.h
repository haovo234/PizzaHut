#pragma once
#include "Pizza.h"

namespace Pizza {
class Beef : public ToppingDecorator {
public:
    Beef(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Beef";
    }
    double cost() const override {
        return pizzaBase->cost() + 3.0;
    }
};
}
