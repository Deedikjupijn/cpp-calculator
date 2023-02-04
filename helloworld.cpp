#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
    cout << "Hi random person" << endl;
    cout << "what do you want to do? Your options are + - and x: ";
    string x;
    cin >> x;
    if (x == "+" || x == "-" || x == "x" || x == "X" || x == "*") {
        cout << "you chose " << x <<"\n" << endl;
        cout << "Type in the first number: ";
        int a;
        cin >> a;
        cout << "Type in the second number: ";
        int b;
        cin >> b;    
        if (x == "+"){
            cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
        }
        else if (x == "-"){
            cout << "The awnser with the sum is: " << a << " and " << b << " is " << a - b << endl;
        }
        else if (x == "x" || x == "X" || x == "*"){
            cout << "The awnser with the sum is: " << a << " and " << b << " is " << a * b << endl;
        }
    }
    else {
        cout << "Type Y to put in another sum or N to close the program: ";
        string o;
        cin >> o;
        if (o == "Y" || o == "y"){
            main();
        }
        else if (o == "N" || o == "n"){
            cout << "Goodbye!\n" << endl;
            sleep_for(2s);
        }
        else{
            cout << "\nYou did not type in a valid option. Goodbye!" << endl;
            sleep_for(4s);
        }
    }
}
