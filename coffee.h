#ifndef COFFEE_H
#define COFFEE_H

#include "caffeinebeverage.h"
#include <iostream>

class Coffee : public CaffeineBeverage{
public:
    Coffee();
    virtual void brew();
    virtual void addCondiments();
    virtual bool customerWantsCondiments();
    string getUserInput();
};

#endif // COFFEE_H
