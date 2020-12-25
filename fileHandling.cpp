#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myFile("meow.txt");

    myFile << "Hayoo!";

    myFile.close();

    ifstream readFile("meow.txt");
    string fileText;
    
    while(getline(readFile, fileText)){
        cout << fileText;
    }

    return 0;
}