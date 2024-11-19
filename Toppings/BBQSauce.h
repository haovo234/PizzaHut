#pragma once
#include "Pizza.h"

namespace Pizza {
class BBQSauce : public ToppingDecorator {
public:
    BBQSauce(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
    string getDescription() const override {
        return pizzaBase->getDescription() + ", BBQ Sauce";
    }
    double cost() const override {
        return pizzaBase->cost() + 1.0;
    }
};
}
