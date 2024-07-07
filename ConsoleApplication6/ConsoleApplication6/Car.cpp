#include "Car.h"
#include <iostream>
using namespace std;

int Car::carCount = 0;

Car::Car(const string& make, const string& model, int year)
    : make(make), model(model), year(year) {
    carCount++;
}

void Car::display() const {
    cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
}

int Car::getCarCount() {
    return carCount;
}
