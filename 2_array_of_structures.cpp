#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee emp[50];
    for (int i = 0; i < n; i++) {
        cout << "Enter id, name and salary: ";
        cin >> emp[i].id >> emp[i].name >> emp[i].salary;
    }
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[top].salary) top = i;
    }
    cout << "Highest paid employee: " << emp[top].name << " (" << emp[top].salary << ")" << endl;
    return 0;
}
