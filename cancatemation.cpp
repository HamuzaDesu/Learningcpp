#include <iostream>
#include <string>
using namespace std;

int main(){

    // WITH STRING CONCATENATION USING +
    string firstname, lastname;
    cout << "What is your first name? ";
    cin >> firstname;
    cout << "What is your second name? ";
    cin >> lastname;

    string fullname = firstname + " " + lastname;

    cout << "Hello " << fullname << "!";

    // WITH THE STRING CLASS METHOD APPEND
    cout << "What is your first name? ";
    cin >> firstname;
    cout << "What is your second name? ";
    cin >> lastname;

    fullname = firstname.append(lastname);

    cout << fullname;
    

    return 0;
}