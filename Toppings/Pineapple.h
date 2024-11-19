    #pragma once
    #include "Pizza.h"

    namespace Pizza {
    class Pineapple : public ToppingDecorator {
    public:
        Pineapple(shared_ptr<Pizza> pizzaBase) : ToppingDecorator(pizzaBase) {}
        string getDescription() const override {
            return pizzaBase->getDescription() + ", Pineapple";
        }
        double cost() const override {
            return pizzaBase->cost() + 1.2;
        }
    };
    }
