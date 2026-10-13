#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int *p = &x;
    cout << "Value of x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Value of p = " << p << endl;
    cout << "Value pointed by p = " << *p << endl;
    *p = 50;
    cout << "x after change through pointer = " << x << endl;
    return 0;
}
