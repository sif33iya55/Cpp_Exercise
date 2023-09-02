#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    Student(string studentName, int studentAge, double studentGrade) {
        name = studentName;
        age = studentAge;
        grade = studentGrade;
    }

    void displayInformation() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student1("John Doe", 18, 85.5);
    Student student2("Jane Smith", 19, 90.0);

    cout << "Student 1 Information:" << endl;
    student1.displayInformation();
    cout << endl;

    cout << "Student 2 Information:" << endl;
    student2.displayInformation();
    cout << endl;

    return 0;
}
