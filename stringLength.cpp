#include <iostream>
#include <string>
using namespace std;

int main(){

    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The string is: " << text << endl;

    cout << "The string length (using string function .length() ) is " << text.length() << endl;
    cout << "The string length (using string function .size() ) is " << text.size() << endl;

    return 0;
}