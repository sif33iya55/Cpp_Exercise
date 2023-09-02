#include <iostream>

using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    double calculateArea() {
        return width * height;
    }

    void displayInfo() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setWidth(5.0);
    rect.setHeight(7.0);

    rect.displayInfo();

    return 0;
}
