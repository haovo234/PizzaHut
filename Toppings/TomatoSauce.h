#pragma once
#include "Pizza.h"

namespace Pizza {
class TomatoSauce : public ToppingDecorator {
public:
    TomatoSauce(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", Tomato Sauce";
    }
    double cost() const override {
        return pizzaBase->cost() + 0.8;
    }
};
}
