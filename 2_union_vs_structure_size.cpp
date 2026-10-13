#include <iostream>
using namespace std;

struct StructType {
    int a;
    double b;
    char c;
};

union UnionType {
    int a;
    double b;
    char c;
};

int main() {
    cout << "Size of structure = " << sizeof(StructType) << endl;
    cout << "Size of union = " << sizeof(UnionType) << endl;
    UnionType u;
    u.a = 10;
    u.b = 5.5;
    cout << "u.b = " << u.b << endl;
    return 0;
}
