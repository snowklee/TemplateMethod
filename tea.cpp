#include "tea.h"

Tea::Tea()
{

}

void Tea::brew(){
    cout << "Steeping the tea" << endl;
}

void Tea::addCondiments(){
    cout << "Adding Lemon" << endl;
}

bool Tea::customerWantsCondiments(){
    string answer = getUserInput();
     if (answer == "y") {
        return true;
     }
     else {
        return false;
     }
}

string Tea::getUserInput(){
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
