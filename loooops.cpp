#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int i = 0;
    while (i < 10){
        cout << "loop" << i << endl;
        i++;
    }

    i = 0;
    do{
        cout << "Hello" << i << endl;
        i++;
    } while (i < 6);

    for (i = 0; i < 5; i++){
        cout << i << endl;
    }
    

    return 0;
}