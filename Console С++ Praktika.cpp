#include <iostream>
using namespace std;

// --------------------------------

class Person {
	string name;
	string surname;
	int age;
public:
	void SetName(string name) {
		this->name = name;
	}
	void SetSurname(string surname) {
		this->surname = surname;
	}
	void SetAge(int age) {
		if (age < 0 || age > 126) this->age = 18;
		else this->age = age;
	}
	string GetName() const {
		return name;
	}
	string GetSurname() const {
		return surname;
	}
	int GetAge() const {
		return age;
	}
	Person() {
		age = 58;
	}
	Person(string name, string surname, int age) {
		SetName(name);
		SetSurname(surname);
		SetAge(age);
	}
	void Print() const {
		cout << "Name: " << name << "\n";
		cout << "Surname: " << surname << "\n";
		cout << "Age: " << age << "\n";
	}
};

// --------------------------------

class Student : public Person {
	string avg_rate;
	int rates[50];
	string zalik_book;
public:
	Student() {
		rates[0] = 12;
		zalik_book = "B01";
	}
	Student(string name, string surname, int age) {
		// SetName(name);
		// SetSurname(surname);
		// SetAge(age);
		rates[0] = 12;
		zalik_book = "B01";
	}
	void Print() const {
		Person::Print();
		cout << "Rate: " << rates[0] << "\n";
		cout << "ZB: " << zalik_book << "\n";
	}
};

// --------------------------------

// Новий клас Firefighter
class Firefighter : public Person {
	string rank;            // звання
	int years_of_service;   // стаж
public:
	Firefighter() {
		rank = "Senior Lieutenant";
		years_of_service = 15;
	}
	Firefighter(string name, string surname, int age, string rank, int years)
	{
		this->rank = rank;
		this->years_of_service = years;
	}

	void Print() const {
		Person::Print();
		cout << "Rank: " << rank << "\n";
		cout << "Years of service: " << years_of_service << "\n";
	}
};

int main() {
	Person p;
	cout << "---------------------\n\n";
	p.SetName("Sergiy");
	p.SetSurname("Kovalchuk");
	p.Print();
	cout << "\n";

	Student s;
	cout << "---------------------\n\n";
	s.SetName("Nikita");
	s.SetSurname("Gaber");
	s.SetAge(16);
	s.Print();
	cout << "\n";

	cout << "=====================\n\n";

	Firefighter f;
	f.SetName("Ivan");
	f.SetSurname("Petrenko");
	f.SetAge(45);
	f.Print();
	cout << "\n";
	cout << "=====================\n";
}