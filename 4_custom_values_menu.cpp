#include <iostream>
using namespace std;

enum Item { TEA = 10, COFFEE = 20, SANDWICH = 50, BURGER = 80 };

int main() {
    int qty;
    int choice;
    cout << "Menu: 10-Tea 20-Coffee 50-Sandwich 80-Burger" << endl;
    cout << "Enter item code: ";
    cin >> choice;
    cout << "Enter quantity: ";
    cin >> qty;
    Item item = static_cast<Item>(choice);
    if (item == TEA || item == COFFEE || item == SANDWICH || item == BURGER)
        cout << "Total bill = " << item * qty << endl;
    else
        cout << "Invalid item code" << endl;
    return 0;
}
