#pragma once
#include "Pizza.h"

namespace Pizza {
class Tomato : public ToppingDecorator {
public:
    Tomato(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Tomato";
    }
    double cost() const override {
        return pizzaBase->cost() + 0.9;
    }
};
}
