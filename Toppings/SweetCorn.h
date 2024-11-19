#pragma once
#include "Pizza.h"

namespace Pizza {
class SweetCorn : public ToppingDecorator {
public:
    SweetCorn(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Sweet Corn";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.2;
    }
};
}