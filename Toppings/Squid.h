#pragma once
#include "Pizza.h"

namespace Pizza {
class Squid : public ToppingDecorator {
public:
    Squid(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Squid";
    }
    double cost() const override {
        return pizzaBase->cost() + 2.5;
    }
};
}
