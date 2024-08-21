#include <iostream>
#include <string>

using namespace std;
class Vehicle {
protected:
    string color;
    int wheels;

public:
    Vehicle(string color, int wheels) : color(color), wheels(wheels) {}

    void displayInfo() {
        cout << "Color: " << color << endl;
        cout << "Number of wheels: " << wheels << endl;
    }
};
class Car : public Vehicle {
public:
    Car(string color) : Vehicle(color, 4) {}

    void honk() {
        cout << "Beep!" << endl;
    }
};
class Bus : public Vehicle {
public:
    Bus(string color) : Vehicle(color, 6) {}

    void honk() {
        cout << "Honk honk!" << endl;
    }
};
class Truck : public Vehicle {
public:
    Truck(string color) : Vehicle(color, 6) {}

    void honk() {
        cout << "HOO-ah!" << endl;
    }
};
int main() {
    Car myCar("Red");
    Bus myBus("Blue");
    Truck myTruck("Green");

    cout << "Car:" << endl;
    myCar.displayInfo();
    myCar.honk();

    cout << "\nBus:" << endl;
    myBus.displayInfo();
    myBus.honk();

    cout << "\nTruck:" << endl;
    myTruck.displayInfo();
    myTruck.honk();

    return 0;
}