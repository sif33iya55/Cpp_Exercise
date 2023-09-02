#include <iostream>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    void setInformation(string carMake, string carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
    }

    void displayInformation() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    int calculateAge() {
        int currentYear = 2022;

        return currentYear - year;
    }
};

int main() {
    Car car;
    car.setInformation("Toyota", "Camry", 2015);
    car.displayInformation();
    int carAge = car.calculateAge();
    cout << "Car Age: " << carAge << " years" << endl;
    return 0;
}
