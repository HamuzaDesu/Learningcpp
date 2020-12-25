#include <iostream>
#include <string>
using namespace std;

int main(){
    int x, y;

    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;

    // IF, ELSE IF AND ELSE STATEMENTS
    if (x > y) {
        cout << x << " is greater than " << y << endl;    
    } else if (x == y) {
        cout << x << " is equal to " << y << endl;
    } else {
        cout << x << " is less than " << y << endl;
    }

    // C++ TERNARY OPERATORS (SIMILAR TO PYTHON)
    // variable = (condition) ? expressionTrue : expressionFalse  
    int time = 18;
    string result = (time < 20) ? "Time is below 20" : "Time is under 20";
    cout << result; 

    return 0;
}