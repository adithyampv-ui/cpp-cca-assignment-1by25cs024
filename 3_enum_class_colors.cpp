#include <iostream>
using namespace std;

enum class Color { Red, Green, Blue };

string colorName(Color c) {
    switch (c) {
        case Color::Red: return "Red";
        case Color::Green: return "Green";
        case Color::Blue: return "Blue";
    }
    return "Unknown";
}

int main() {
    Color c = Color::Green;
    cout << "Selected color: " << colorName(c) << endl;
    cout << "Underlying value: " << static_cast<int>(c) << endl;
    return 0;
}
