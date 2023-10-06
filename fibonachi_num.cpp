#include <iostream>
using namespace std;

int main() {
    int fib1 = 0;
    int fib2 = 1;
    int fib3;
    int storage;
    char answer;
    do {
        cout << "Type which fibonachi number by list you want to see: " << endl;
        cin >> storage;
        if (storage >= 0) {
            for (int i = 0; i <= storage; i++) {
                if (i < 2) {
                    fib3 = fib1;
                    fib1 += fib2;
                }
                else {
                    fib3 = fib1;
                    fib1 += fib2;
                    fib2 = fib3;
                }
            }
            cout << "On the place number " << storage << " fibonachi number is: " << fib2 << endl;
        } else {
            cout << "Your typed number is less than zero. Try another one." << endl;
        }
        cout << "Do you want to repeat? (y/n)" << endl;
        cin >> answer;
        fib1 = fib3 = 0;
        fib2 = 1;
    } while (answer != 'n');
}