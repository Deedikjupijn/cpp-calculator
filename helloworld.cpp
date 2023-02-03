#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!\n" << endl;
    cout << "what do you want to do? Your options are + - and x: ";
    char x;
    cin >> x;
    if (x == '+'){
        cout << "you chose +\n" << endl;
    }
    else if (x == '-'){
        cout << "you chose -\n" << endl;
    }
    else if (x == 'x'){
        cout << "you chose x\n" << endl;
    }
    else{
        cout << "That is no valid option\n" << endl;
    }
}