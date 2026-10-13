#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;
    cout << "Size of union = " << sizeof(d) << endl;
    d.i = 65;
    cout << "As int = " << d.i << endl;
    d.c = 'Z';
    cout << "As char = " << d.c << endl;
    d.f = 3.14f;
    cout << "As float = " << d.f << endl;
    return 0;
}
