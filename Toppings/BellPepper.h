#pragma once
#include "Pizza.h"

namespace Pizza {
class BellPepper : public ToppingDecorator {
public:
    BellPepper(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Bell Pepper";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.0;
    }
};
}
