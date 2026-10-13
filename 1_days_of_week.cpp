#include <iostream>
using namespace std;

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    Day today = WEDNESDAY;
    cout << "Value of WEDNESDAY = " << today << endl;
    if (today == SATURDAY || today == SUNDAY)
        cout << "It is the weekend" << endl;
    else
        cout << "It is a weekday" << endl;
    return 0;
}
