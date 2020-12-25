#include <iostream>
#include <fstream>
using namespace std;

int main(){

    try{
        int age = 15;

        if (age > 18){
            cout << "Welcome" << endl;
        }else{
            throw 500;
        }
    }
    catch (int number){
        cout << "Access Denied" << endl;
        cout << "Error number: " << number << endl;
    }

    return 0;
}