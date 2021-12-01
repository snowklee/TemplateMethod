#include "coffee.h"

Coffee::Coffee()
{

}

void Coffee::brew(){
    cout << "Dripping Coffee through filter" << endl;
}

void Coffee::addCondiments(){
    cout << "Adding Sugar and Milk" << endl;
}

bool Coffee::customerWantsCondiments(){
    string answer = getUserInput();
     if (answer == "y") {
        return true;
     }
     else {
        return false;
     }
}

string Coffee::getUserInput(){
    string answer = NULL;
    char *answer_char = new char [10];
    cout << "Would you like milk and sugar with your coffee (y/n)?" << endl;
    cin >> answer_char;
    answer = string(answer_char);

    if (answer == "n") {
    return "no";
    }
    return answer;
}
