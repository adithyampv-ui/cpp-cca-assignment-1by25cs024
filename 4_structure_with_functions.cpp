#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

float area(Rectangle r) {
    return r.length * r.width;
}

Rectangle scale(Rectangle r, float factor) {
    r.length *= factor;
    r.width *= factor;
    return r;
}

int main() {
    Rectangle r;
    cout << "Enter length and width: ";
    cin >> r.length >> r.width;
    cout << "Area = " << area(r) << endl;
    Rectangle bigger = scale(r, 2);
    cout << "Area after doubling sides = " << area(bigger) << endl;
    return 0;
}
