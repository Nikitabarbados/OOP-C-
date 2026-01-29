#include <iostream>
using namespace std;

// ---------------------------------------------------------

// Агрегування
//class Hat {
//public:
//	string color;
//	string model;
//	double price;
//};
//
//class Person {
//public:
//	string name; // композиція
//	Hat* hat; // агрегування
//
//	void TakeHat(Hat* hat)
//	{
//		this->hat = hat;
//	}
//
//	void GoWalk()
//	{
//		cout << "подув вiтерець...\n";
//		hat = nullptr;
//	}
//
//	void WhereIsYourHat()
//	{
//		cout << "а ось вона:  " << hat << "\n";
//	}
//};
//
//int main() {
//	setlocale(0, "Ukrainian");
//	Hat hat;
//	Person alex;
//	alex.TakeHat(&hat);
//	alex.WhereIsYourHat();
//	alex.GoWalk();
//	alex.WhereIsYourHat();
//	cout << "шляпа: " << &hat << "\n";
//}
// 
// ---------------------------------------------------------
// 
// Композиція

#include <iostream>
using namespace std;

class PegLeg // дерев'яна нога
{
public:
	string color;  // колір ноги
	bool dirty;    // yes / no
	double length; // inches
	int usability; // 0 - 100%

	PegLeg()
	{
		cout << "Peg Leg C-TOR!\n";
	}

	~PegLeg()
	{
		cout << "Peg Leg DESTRUCTOR!\n";
	}
};

class HandHook // рука-гачок
{
public:
	string material;
	int usability;
	bool dirty;
	bool canMakeSelfy;

	HandHook()
	{
		cout << "Hand Hook C-TOR!\n";
	}
	~HandHook()
	{
		cout << "Hand Hook DESTRUCTOR!\n";
	}
};

class EyePatch // пов'язка на око
{
public:
	string color; // black is timeless classic
	double size;  // XXL 
	bool elastic; // yes / no
	bool leather; // yes / no

	EyePatch()
	{
		cout << "Eye Patch C-TOR!\n";
	}
	~EyePatch()
	{
		cout << "Eye Patch DESTRUCTOR!\n";
	}
};

class Pirate {
public:
	string nickname;
	PegLeg leg;
	HandHook hand;
	EyePatch patch;

	Pirate(string nickname)
	{
		this->nickname = nickname;
		cout << "Pirate C-TOR!\n";
	}

	~Pirate()
	{
		cout << "Pirate DESTRUCTOR!\n";
	}

	void CaptureShip()
	{
		cout << nickname << " says: " << "Prepare a boarding party!!!\n";
	}

	void SingSong()
	{
		cout << nickname << " singing: " << "\"...Yo-ho-ho, and a bottle of rum!!!\"\n";
	}
};

int main() {
	Pirate p("Captain Jack Sparrow");
	p.CaptureShip();
	p.SingSong();
}

// ---------------------------------------------------------