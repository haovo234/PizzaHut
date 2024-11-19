#pragma once
#include "Pizza.h"

namespace Pizza {
class CherryTomato : public ToppingDecorator {
public:
    CherryTomato(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Cherry Tomato";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.1;
    }
};
}
