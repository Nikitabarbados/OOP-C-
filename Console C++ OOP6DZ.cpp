#include <iostream>
using namespace std;

// ----------------------------------------------------------------

class Person {
protected:
	string name;
	string surname;
	int age;
	string status;

public:
	// Сеттеры
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
	void SetStatus(string status) {
		this->status = status;
	}

	// -----------------------------------

	// Геттеры
	string GetName() const {
		return name;
	}
	string GetSurname() const {
		return surname;
	}
	int GetAge() const {
		return age;
	}
	string GetStatus() const {
		return status;
	}

	// -----------------------------------

	// Конструкторы
	Person(string name, string surname, int age, string status) {
		cout << "PERSON C-TOR WITH 3 PARAMS\n";
		SetName(name);
		SetSurname(surname);
		SetAge(age);
		SetStatus(status);
	}

	// Метод выводу
	void Print() const {
		cout << "Name: " << name << "\n";
		cout << "Surname: " << surname << "\n";
		cout << "Age: " << age << "\n";
		cout << "Status: " << status << "\n";
	}
};

// ----------------------------------------------------------------

// Класс Студент, наследник класса Person
class Student : public Person {
protected:
	string avg_rate;
	int rates[50];
	string zalik_book;

public:

	// -----------------------------------
	// Конструктор без параметров
	Student() : Person("Alex", "!@#$%", 45, "Adult") {
		cout << "STUDENT C-TOR WITHOUT 3 PARAMS\n";
		SetName("");
		SetSurname("");
		rates[0] = 10;
		zalik_book = "AA00001";
		avg_rate = "8";
		SetStatus("Will be programmer");
	}
	// -----------------------------------
	// Конструктор с параметрами
	Student(string name, string surname, int age, string status) : Person(name, surname, age , status) {
		cout << "STUDENT C-TOR WITH 3 PARAMS\n";
		rates[0] = 10;
		zalik_book = "AA00001";
		avg_rate = "8";
		SetStatus("Will be programmer");
	}

	// -----------------------------------
	// Сеттеры и геттеры для личных полей класса Student
	void SetZalikBook(string zalik_book) {
		this->zalik_book = zalik_book;
	}
	string GetZalikBook() const {
		return zalik_book;
	}
	void SetAvgRate(string avg_rate) {
		this->avg_rate = avg_rate;
	}
	string GetAvgRate() const {
		return avg_rate;
	}
	// -----------------------------------
	// Переопределение метода Print
	void Print() const {
		Person::Print();
		cout << "Rate: " << rates[0] << "\n";
		cout << "ZB: " << zalik_book << "\n";
		cout << "Average Rate: " << avg_rate << "\n";
	}
};

// ----------------------------------------------------------------
// Класс Аспирант, наследник класса Student

class Aspirant : public Student {
protected:
	string subjectCandidate; // тема кандидатской работы студента

public:
	// Конструктор без параметров
	Aspirant() : Student() {
		cout << "ASPIRANT C-TOR WITHOUT PARAMS\n";
		rates[0] = 12;
		zalik_book = "AA00101";
		avg_rate = "12";
		subjectCandidate = "Digital Industrial Technologies";
		SetStatus("Programmer");
	}

	// Конструктор с параметрами
	Aspirant(string name, string surname, int age, string Subject, string status) : Student(name, surname, age, status)
	{
		cout << "ASPIRANT C-TOR WITH 4 PARAMS\n";
		rates[0] = 12;
		zalik_book = "AA00101";
		avg_rate = "12";
		SetSubject(Subject);
		SetStatus(status);
	}

	// -----------------------------------
	// Сеттеры и геттеры для личных полей класса Aspirant
	void SetSubject(string Subject) {
		subjectCandidate = Subject;
	}
	string GetSubject() const {
		return subjectCandidate;
	}
	// -----------------------------------
	// Переопределение метода Print
	void Print() const {
		Student::Print();
		cout << "Subject: " << subjectCandidate << "\n";
	}
};
// ----------------------------------------------------------------

	int main() {

		cout << "---------------------\n";
		Person p("Nikita", "Gaber", 58, "Adult");
		p.Print();

		cout << "---------------------\n";
		Student s("Petro", "Petrenko", 18, "Will be programmer");
		s.Print();
		cout << "---------------------\n";

		Aspirant a("Ivan", "Ivanenko", 26, "Industrial Technologies", "Programmer");
		a.Print();
		cout << "---------------------\n";
		
	};