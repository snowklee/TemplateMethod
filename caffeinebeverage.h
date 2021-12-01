#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H
using namespace std;
#include <iostream>

class CaffeineBeverage
{
	public:
		CaffeineBeverage();
    	virtual void prepareRecipe();
	    virtual void boilWater();
	    virtual void brew() = 0;
	    virtual void pourInCup();
	    virtual void addCondiments() = 0;
	    virtual bool customerWantsCondiments();
};

#endif


