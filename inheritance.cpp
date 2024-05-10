#include <iostream>
using namespace std;
class Vehicle {
protected:
    int wheels;
public:
    void setWheels(int w) {
        wheels = w;
    }
};
class Car : public Vehicle {
private:
    int passengers;
public:
    void setPassengers(int p) {
        passengers = p;
    }
    void display() {
        cout << "Car with " << passengers << " passengers and " << wheels << " wheels." << endl;
    }
};
class SUV : public Car {
public:
    void displaySUV() {
        cout << "SUV with " << wheels << " wheels." << endl;
    }
};
int main() {
    cout << "Single-level inheritance:" << endl;
    Car myCar;
    myCar.setWheels(4);
    myCar.setPassengers(5);
    myCar.display();
    cout << "\nMultilevel inheritance:" << endl;
    SUV mySUV;
    mySUV.setWheels(4);
    mySUV.displaySUV();
    return 0;
}