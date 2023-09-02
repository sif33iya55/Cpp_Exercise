#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int IDnumber;
    double hourlyWage;

public:
    Employee(string employeeName, int employeeID, double employeeWage) {
        name = employeeName;
        IDnumber = employeeID;
        hourlyWage = employeeWage;
    }

    double calculateWeeklySalary(double hoursWorked) {
        return hourlyWage * hoursWorked;
    }

    void displayInformation() {
        cout << "Name: " << name << endl;
        cout << "ID Number: " << IDnumber << endl;
        cout << "Hourly Wage: $" << hourlyWage << endl;
    }
};

int main() {
    Employee employee("John Doe", 12345, 15.0);
    employee.displayInformation();

    double hoursWorked = 40.0;
    double weeklySalary = employee.calculateWeeklySalary(hoursWorked);
    cout << "Weekly Salary: $" << weeklySalary << endl;

    return 0;
}
