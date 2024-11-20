#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

namespace Pizza {
class Pizza {
public:
    virtual string getDescription() const = 0;
    virtual double cost() const = 0;
};

class PlainPizza : public Pizza {
protected:
    string name = "Plain Pizza";
public:
    string getDescription() const override {
        return name;
    }

    double cost() const override {
        return 5.0;
    }
    string getName() const { return name; }
    void setName(const string& name) {
        this-> name = name;
    }
};

class ToppingDecorator : public Pizza {
protected:
    shared_ptr<Pizza> pizzaBase;
public:
    ToppingDecorator(shared_ptr<Pizza> pizzaBase) : pizzaBase(pizzaBase) {}
    virtual string getDescription() const override = 0;
    virtual double cost() const override = 0;

};
}

