#include <iostream>
using namespace std;

enum Signal { RED, YELLOW, GREEN };

int main() {
    int choice;
    cout << "Enter signal (0-RED, 1-YELLOW, 2-GREEN): ";
    cin >> choice;
    Signal s = static_cast<Signal>(choice);
    switch (s) {
        case RED:
            cout << "Stop" << endl;
            break;
        case YELLOW:
            cout << "Get ready" << endl;
            break;
        case GREEN:
            cout << "Go" << endl;
            break;
        default:
            cout << "Invalid signal" << endl;
    }
    return 0;
}
