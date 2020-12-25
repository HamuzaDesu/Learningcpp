#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "Bred";
    string &meal = food;

    cout << "Food: " << food << endl;
    cout << "&Meal: " << meal << endl;

    cout << endl;

    cout << "Memory adress of variable food is: " << &food << endl;

    return 0;
}