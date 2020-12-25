#include <iostream>
#include <string>
using namespace std;

int main(){

    string greeting = "Hello";

    cout << "First letter of variable greeting (" << greeting <<") is " << greeting [0] << endl;

    greeting[0] = 'J';

    cout << "First letter of variable greeting (" << greeting <<") is now " << greeting [0];
    return 0;
}