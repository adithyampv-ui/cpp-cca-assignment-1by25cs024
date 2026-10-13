#include <iostream>
using namespace std;

union Number {
    unsigned int value;
    unsigned char bytes[4];
};

int main() {
    Number n;
    n.value = 0x12345678;
    cout << hex;
    cout << "Value = 0x" << n.value << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Byte " << dec << i << " = 0x" << hex << (int)n.bytes[i] << endl;
    }
    return 0;
}
