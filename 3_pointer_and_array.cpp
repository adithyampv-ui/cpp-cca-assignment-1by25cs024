#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(p + i) << " at " << (p + i) << endl;
        sum += *(p + i);
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
