#include <iostream>
#include <string>
using namespace std;

class Fruit {
    public:
        int yum;
        string name;
        void speak(){
            cout << "I am an " << name;
        }
        Fruit(int yumLevel, string fruitName){
            yum = yumLevel;
            name = fruitName;
        }
    private:
        int x = 7;
};


int main(){
    Fruit apple(15, "Apple");


    cout << apple.yum << endl;
    cout << apple.name << endl;

    apple.speak();

    return 0;
}