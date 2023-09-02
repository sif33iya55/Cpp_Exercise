#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int d, int m, int y) {
        setDay(d);
        setMonth(m);
        setYear(y);
    }

    void setDay(int d) {
        if (d >= 1 && d <= 31) {
            day = d;
        } else {
            cout << "Invalid day! Setting day to 1." << endl;
            day = 1;
        }
    }

    int getDay() {
        return day;
    }

    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            cout << "Invalid month! Setting month to 1." << endl;
            month = 1;
        }
    }

    int getMonth() {
        return month;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }

    void displayDate() {
        cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    }
};

int main() {
    

    Date date(5, 11, 2020);

    cout << "Day: " << date.getDay() << endl;
    cout << "Month: " << date.getMonth() << endl;
    cout << "Year: " << date.getYear() << endl;

    cout << "Formatted Date: ";
    date.displayDate();

    return 0;
}
