#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!\n" << endl;
    cout << "what do you want to do? Your options are + - and x: ";
    char x;
    cin >> x;
    if (x == '+' || x == '-' || x == 'x' || x == 'X' || x == '*') {
        cout << "you chose " << x <<"\n" << endl;
        cout << "Type in the first number: ";
        int a;
        cin >> a;
        cout << "Type in the second number: ";
        int b;
        cin >> b;    
        if (x == '+'){
            cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
        }
        else if (x == '-'){
            cout << "The awnser with the sum is: " << a << " and " << b << " is " << a - b << endl;
        }
        else if (x == 'x' || x == 'X' || x == '*'){
            cout << "The awnser with the sum is: " << a << " and " << b << " is " << a * b << endl;
        }
    }
    else{
        cout << "That is no valid option, the program will be closed now\n" << endl;
    }
}
