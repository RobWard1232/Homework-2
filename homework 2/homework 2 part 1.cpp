#include <iostream>
using namespace std;

int main() {
    const double PAY_INCREASE = 0.076;  // 7.6% pay increase

    char repeat;

    do {
        double previousSalary;
        cout << "Enter the employee's previous annual salary: ";
        cin >> previousSalary;

        double retroactivePay = previousSalary * PAY_INCREASE * 0.5;  // Retroactive for 6 months
        double newAnnualSalary = previousSalary * (1 + PAY_INCREASE);
        double newMonthlySalary = newAnnualSalary / 12;

        cout << "Retroactive pay due: $" << retroactivePay << endl;
        cout << "New annual salary: $" << newAnnualSalary << endl;
        cout << "New monthly salary: $" << newMonthlySalary << endl;

        cout << "Do you want to calculate for another employee? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    cout << "Program ended." << endl;

    return 0;
}