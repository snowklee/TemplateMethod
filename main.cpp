#include "coffee.h"
#include "tea.h"
#include <iostream>

int main() {
	cout << endl << "Tea:" << endl;
    Tea *tea = new Tea();
    tea->prepareRecipe();

    cout << endl <<  "Coffee:" << endl;
    Coffee *coffee = new Coffee();
    coffee->prepareRecipe();
    
	return 0;
}

