#include <iostream>
using namespace std;

enum Type { INTEGER, DECIMAL, CHARACTER };

struct Value {
    Type type;
    union {
        int i;
        float f;
        char c;
    };
};

void show(Value v) {
    switch (v.type) {
        case INTEGER: cout << "Integer: " << v.i << endl; break;
        case DECIMAL: cout << "Decimal: " << v.f << endl; break;
        case CHARACTER: cout << "Character: " << v.c << endl; break;
    }
}

int main() {
    Value a, b, c;
    a.type = INTEGER;
    a.i = 42;
    b.type = DECIMAL;
    b.f = 2.5f;
    c.type = CHARACTER;
    c.c = 'K';
    show(a);
    show(b);
    show(c);
    return 0;
}
