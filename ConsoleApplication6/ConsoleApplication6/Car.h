
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    static int carCount;

public:
    Car(const string& make, const string& model, int year);
    void display() const;
    static int getCarCount();
};

