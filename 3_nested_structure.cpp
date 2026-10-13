#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    string name;
    Date dob;
};

int main() {
    Person p;
    cout << "Enter name: ";
    cin >> p.name;
    cout << "Enter date of birth (dd mm yyyy): ";
    cin >> p.dob.day >> p.dob.month >> p.dob.year;
    cout << p.name << " was born on " << p.dob.day << "/" << p.dob.month << "/" << p.dob.year << endl;
    return 0;
}
