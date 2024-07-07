#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	Car car1("Ford", "Cheverlet", 2021);
	Car car2("Toyota", "Camery", 2019);
	Car car3("kia", "Niro", 2023);

		cout << "total number of cars created is: " << Car::getCarCount() << endl;
		return 0;


}
