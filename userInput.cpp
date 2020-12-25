#include <iostream>
#include <string>
using namespace std;

int main(){

    string firstName, lastName;

    //CIN CAN ONLY TAKE ONE WORK INPUTS. IT CONSIDERS SPACES A TERMINATING CHAR
    cout << "First name: ";
    cin >> firstName;

    cout << "Last name: ";
    cin >> lastName;

    cout << "Your full name is " << firstName << " " << lastName << endl;

    // INSTEAD OF CIN, YOU CAN USE getline() FUNCTION WHICH TAKES CIN AS ITS FIRST PARAMETER
    string fullname;

    cout << "Whats your full name? ";
    getline(cin, fullname);

    cout << "Your full name is: " << fullname;
    return 0;
}