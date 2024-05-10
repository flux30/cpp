#include <iostream>
using namespace std;
class Shape {
public:
    virtual float calculateArea() = 0;
    virtual void displayInfo() {
        cout << "Shape: ";
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float calculateArea() override {
        return 3.14 * radius * radius;
    }
    void displayInfo() override {
        Shape::displayInfo();
        cout << "Circle" << endl;
    }
};
class Rectangle : public Shape {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float calculateArea() override {
        return length * width;
    }
    void displayInfo() override {
        Shape::displayInfo();
        cout << "Rectangle" << endl;
    }
};
int main() {
    Shape *shape1 = new Circle(5);
    Shape *shape2 = new Rectangle(4, 6);
    shape1->displayInfo();
    cout << "Area: " << shape1->calculateArea() << endl;
    shape2->displayInfo();
    cout << "Area: " << shape2->calculateArea() << endl;
    delete shape1;
    delete shape2;
    return 0;
}