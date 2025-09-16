#include <iostream>
using namespace std;

class Transport {
	string description;

public:
	virtual void Drive() {
		cout << "Transport::Drive()\n";
	}
	virtual void Test() {
		cout << "Transport::Drive()\n";
	}
};

class Car : public Transport {
	int volume = 100;
	string model = "Porsche Cayenn";
public:
	void Drive() {
		cout << "Car::Drive()\n";
	}
	virtual void Bibik() {
		cout << volume << " " << model << "\n";
		cout << "FA FA\n";
	}
};

class Bike : public Transport {
public:
	void Drive() {
		cout << "Bike::Drive()\n";
	}
};

class Tram : public Transport {
public:
	void Drive() {
		cout << "Tram::Drive()\n";
	}
};

class Person {};

int main() {

	srand(time(0));

	int count;
	cout << "How many elements: ";
	cin >> count;

	Transport** ar = new Transport * [count];

	for (int i = 0; i < count; i++)
	{
		int r = rand() % 3;
		if (r == 0) ar[i] = new Car();
		if (r == 1) ar[i] = new Bike();
		if (r == 2) ar[i] = new Tram();
	}

	for (int i = 0; i < count; i++)
		ar[i]->Drive();
}