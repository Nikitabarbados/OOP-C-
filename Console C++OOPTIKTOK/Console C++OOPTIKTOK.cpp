#include <iostream>	
using namespace std;

class Base {
public:
	void display() {
		cout << "Base class" << "\n";
	}
};
class Delivered : public Base {
public:
	void display() {
		cout << "Derived class" << "\n";
	}
};

int main() {
	Base* ptr = new Delivered();
	ptr->display();
	delete ptr;
}