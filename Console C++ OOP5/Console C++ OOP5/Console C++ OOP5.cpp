// ----------------------------------------------------------------
//ВКЛАДЕНІСТЬ

//#include <iostream>
//using namespace std;
//
//// outer class (зовнішній клас)
//class Pirate {
//public: // модифікатор паблік каже про те, що типами внутрішніх класів можна буде скористатися не лише в тілі Пірата, а й зовні
//	// inner class (внутрішній, або вкладений клас)
//	class PegLeg // дерев'яна нога
//	{
//	public:
//		string color;  // колір ноги
//		bool dirty;    // yes / no
//		double length; // inches
//		int usability; // 0 - 100%
//
//		PegLeg()
//		{
//			cout << "Peg Leg C-TOR!\n";
//		}
//
//		~PegLeg()
//		{
//			cout << "Peg Leg DESTRUCTOR!\n";
//		}
//	};
//
//	class HandHook // рука-гачок
//	{
//	public:
//		string material;
//		int usability;
//		bool dirty;
//		bool canMakeSelfy;
//
//		HandHook()
//		{
//			cout << "Hand Hook C-TOR!\n";
//		}
//		~HandHook()
//		{
//			cout << "Hand Hook DESTRUCTOR!\n";
//		}
//	};
//
//	class EyePatch // пов'язка на око
//	{
//	public:
//		string color; // black is timeless classic
//		double size;  // XXL 
//		bool elastic; // yes / no
//		bool leather; // yes / no
//
//		EyePatch()
//		{
//			cout << "Eye Patch C-TOR!\n";
//		}
//		~EyePatch()
//		{
//			cout << "Eye Patch DESTRUCTOR!\n";
//		}
//	};
//
//
//	string nickname;
//	PegLeg leg;
//	HandHook hand;
//	EyePatch patch;
//
//	Pirate(string nickname)
//	{
//		this->nickname = nickname;
//		cout << "Pirate C-TOR!\n";
//	}
//
//	~Pirate()
//	{
//		cout << "Pirate DESTRUCTOR!\n";
//	}
//
//	void CaptureShip()
//	{
//		cout << nickname << " says: " << "Prepare a boarding party!!!\n";
//	}
//
//	void SingSong()
//	{
//		cout << nickname << " singing: " << "\"...Yo-ho-ho, and a bottle of rum!!!\"\n";
//	}
//};
//
//int main() {
//	Pirate p("Captain Jack Sparrow");
//	p.CaptureShip();
//	p.SingSong();
//
//	// вкладеність - це спосіб виразити інкапсуляцію, але не на рівні поля чи метода, а на рівні КЛАСУ
//	Pirate::PegLeg leg;
//}

// ----------------------------------------------------------------

//FRIEND ДРУЖБА

//#include <iostream>
//using namespace std;
//
//class A {
//private: // this class only
//	int value = 10;
//public:
//	void Test() {
//		cout << value << endl;
//	}
//
//	friend int main();
//	friend class Another;
//};
//
//class Another {
//public:
//	void Func() {
//		A a;
//		a.value = 15;
//		cout << a.value << endl;
//	}
//};
//
//int main() {
//	A a;
//	a.Test(); // 10
//	cout << a.value << endl;
//
//	Another b;
//	b.Func();
//}

// ----------------------------------------------------------------

//ЗАЛЕЖНІСТЬ ЗАВИСИМОСТЬ

//#include <iostream>
//using namespace std;
//
//class A {
//private:
//	int value = 10;
//public:
//	void Alex() { // змінювати прототипи інтерфейсних методів - ДУЖЕ ПОГАНА ІДЕЯ!
//		cout << value << endl;
//	}
//};
//
//class Another { // класс Еназер ЗАЛЕЖИТЬ від інтерфейсу класа А
//public:
//	void Func() {
//		A a;
//		a.Test();
//	}
//};
//
//int main() {
//	A a;
//	a.Test(); // 10
//
//}

// ----------------------------------------------------------------

//світ без успадкування ((((((((
// 
//#include <iostream>
//using namespace std;
// 
//class Person {
//private:
//	string name;
//	string surname;
//	int age;
//public:
//	void SetName(string name) {
//		this->name = name;
//	}
//	void SetSurname(string surname) {
//		this->surname = surname;
//	}
//	void SetAge(int age) {
//		if (age < 0 || age > 126) this->age = 18;
//		else this->age = age;
//	}
//	string GetName() const {
//		return name;
//	}
//	string GetSurname() const {
//		return surname;
//	}
//	int GetAge() const {
//		return age;
//	}
//	Person() {
//		name = "Oleksandr";
//		surname = "Zahoruiko";
//		age = 36;
//	}
//	Person(string name, string surname, int age) {
//		SetName(name);
//		SetSurname(surname);
//		SetAge(age);
//	}
//	void Print() const {
//		cout << "Name: " << name << "\n";
//		cout << "Surname: " << surname << "\n";
//		cout << "Age: " << age << "\n";
//	}
//};
// 
//class Student {
//private:
//	string name;
//	string surname;
//	int age;
//	string avg_rate;
//	int rates[50];
//	string zalik_book;
//public:
//	void SetName(string name) {
//		this->name = name;
//	}
//	void SetSurname(string surname) {
//		this->surname = surname;
//	}
//	void SetAge(int age) {
//		if (age < 0 || age > 126) this->age = 18;
//		else this->age = age;
//	}
//	string GetName() const {
//		return name;
//	}
//	string GetSurname() const {
//		return surname;
//	}
//	int GetAge() const {
//		return age;
//	}
//	Student() {
//		name = "Oleksandr";
//		surname = "Zahoruiko";
//		age = 36;
//		rates[0] = 12;
//		zalik_book = "AA00001";
//	}
//	Student(string name, string surname, int age) {
//		SetName(name);
//		SetSurname(surname);
//		SetAge(age);
//		rates[0] = 12;
//		zalik_book = "AA00001";
//	}
//	void Print() const {
//		cout << "Name: " << name << "\n";
//		cout << "Surname: " << surname << "\n";
//		cout << "Age: " << age << "\n";
//		cout << "Rate: " << rates[0] << "\n";
//		cout << "ZB: " << zalik_book << "\n";
//	}
//};
// 
//int main() {
//	Person a;
//	a.Print();
// 
//	Person b("Petro", "Mykolaychuk", 19);
//	b.Print();
// 
//	Student s;
//	s.Print();
//}

// ----------------------------------------------------------------

//асоціація - knows about
//агрегування - has a
//композиція - part of
//успадкування - is

// ----------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// base class, parent class - батьківський клас, БАЗОВИЙ КЛАС
//class Person {
//private:
//	string name;
//	string surname;
//	int age;
//public:
//	void SetName(string name) {
//		this->name = name;
//	}
//	void SetSurname(string surname) {
//		this->surname = surname;
//	}
//	void SetAge(int age) {
//		if (age < 0 || age > 126) this->age = 18;
//		else this->age = age;
//	}
//	string GetName() const {
//		return name;
//	}
//	string GetSurname() const {
//		return surname;
//	}
//	int GetAge() const {
//		return age;
//	}
//	Person() {
//		name = "Oleksandr";
//		surname = "Zahoruiko";
//		age = 36;
//	}
//	Person(string name, string surname, int age) {
//		SetName(name);
//		SetSurname(surname);
//		SetAge(age);
//	}
//	void Print() const {
//		cout << "Name: " << name << "\n";
//		cout << "Surname: " << surname << "\n";
//		cout << "Age: " << age << "\n";
//	}
//};
//
//// derived class, child class - відспадкований клас, похідний клас, ДОЧІРНІЙ КЛАС
//// : public Person - синтаксис успадкування (наследование, inheritance)
//// робимо новий клас на основі вже існуючого
//// читається так: Студент є різновидом Людини, Студент є покращеною та більш деталізованою версією Людини, Студент Є Людиною (is)
//class Student : public Person {
//private:
//	//string name; // поля були успадковані
//	//string surname;
//	//int age;
//	string avg_rate;
//	int rates[50];
//	string zalik_book;
//public:
//	/*void SetName(string name) {
//		this->name = name;
//	}
//	void SetSurname(string surname) {
//		this->surname = surname;
//	}
//	void SetAge(int age) {
//		if (age < 0 || age > 126) this->age = 18;
//		else this->age = age;
//	}
//	string GetName() const {
//		return name;
//	}
//	string GetSurname() const {
//		return surname;
//	}
//	int GetAge() const {
//		return age;
//	}*/
//	Student() {
//		// ПОЛЯ БАТЬКІВСЬКОГО КЛАСА ДОЧІРНІЙ КЛАС НЕ МАЄ ІНІЦІАЛІЗУВАТИ !!!! не його відповідальність!
//		// name = "Oleksandr";
//		// surname = "Zahoruiko";
//		// age = 36;
//		rates[0] = 12;
//		zalik_book = "AA00001";
//	}
//	Student(string name, string surname, int age) {
//		// SetName(name);
//		// SetSurname(surname);
//		// SetAge(age);
//		rates[0] = 12;
//		zalik_book = "AA00001";
//	}
//	void Print() const {
//		Person::Print();
//		//cout << "Name: " << name << "\n";
//		//cout << "Surname: " << surname << "\n";
//		//cout << "Age: " << age << "\n";
//
//		cout << "Rate: " << rates[0] << "\n";
//		cout << "ZB: " << zalik_book << "\n";
//	}
//};
//
//int main() {
//	Person a;
//	a.Print();
//
//	Person b("Petro", "Mykolaychuk", 19);
//	b.Print();
//
//	Student s;
//	s.Print();
//}
//
//// 106 lines of code

// ----------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//class Person {
//	string name;
//	string surname;
//	int age;
//public:
//	void SetName(string name) {
//		this->name = name;
//	}
//	void SetSurname(string surname) {
//		this->surname = surname;
//	}
//	void SetAge(int age) {
//		if (age < 0 || age > 126) this->age = 18;
//		else this->age = age;
//	}
//	string GetName() const {
//		return name;
//	}
//	string GetSurname() const {
//		return surname;
//	}
//	int GetAge() const {
//		return age;
//	}
//	Person() {
//		name = "Oleksandr";
//		surname = "Zahoruiko";
//		age = 36;
//	}
//	Person(string name, string surname, int age) {
//		SetName(name);
//		SetSurname(surname);
//		SetAge(age);
//	}
//	void Print() const {
//		cout << "Name: " << name << "\n";
//		cout << "Surname: " << surname << "\n";
//		cout << "Age: " << age << "\n";
//	}
//};
//
//class Student : public Person {
//	string avg_rate;
//	int rates[50];
//	string zalik_book;
//public:
//	Student() {
//		rates[0] = 12;
//		zalik_book = "AA00001";
//	}
//	Student(string name, string surname, int age) {
//		// SetName(name);
//		// SetSurname(surname);
//		// SetAge(age);
//		rates[0] = 12;
//		zalik_book = "AA00001";
//	}
//	void Print() const {
//		Person::Print();
//		cout << "Rate: " << rates[0] << "\n";
//		cout << "ZB: " << zalik_book << "\n";
//	}
//};
//
//int main() {
//	Student s;
//	s.Print();
//	s.SetName("Oleh");
//	s.SetSurname("Shvets");
//	s.Print();
//}
//
//// 106 lines of code - без успадкування
//// 76 рядків коду - якщо є успадкування
//
//// ТЕХНІЧНА ПРИЧИНА ВИКОРИСТОВУВАТИ УСПАДКУВАННЯ - СКОРОЧЕННЯ КОДУ

// ----------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//// --------------------------------
//
//class Person {
//	string name;
//	string surname;
//	int age;
//public:
//	void SetName(string name) {
//		this->name = name;
//	}
//	void SetSurname(string surname) {
//		this->surname = surname;
//	}
//	void SetAge(int age) {
//		if (age < 0 || age > 126) this->age = 18;
//		else this->age = age;
//	}
//	string GetName() const {
//		return name;
//	}
//	string GetSurname() const {
//		return surname;
//	}
//	int GetAge() const {
//		return age;
//	}
//	Person() {
//		age = 58;
//	}
//	Person(string name, string surname, int age) {
//		SetName(name);
//		SetSurname(surname);
//		SetAge(age);
//	}
//	void Print() const {
//		cout << "Name: " << name << "\n";
//		cout << "Surname: " << surname << "\n";
//		cout << "Age: " << age << "\n";
//	}
//};
//
//// --------------------------------
//
//class Student : public Person {
//	string avg_rate;
//	int rates[50];
//	string zalik_book;
//public:
//	Student() {
//		rates[0] = 12;
//		zalik_book = "B01";
//	}
//	Student(string name, string surname, int age) {
//		// SetName(name);
//		// SetSurname(surname);
//		// SetAge(age);
//		rates[0] = 12;
//		zalik_book = "B01";
//	}
//	void Print() const {
//		Person::Print();
//		cout << "Rate: " << rates[0] << "\n";
//		cout << "ZB: " << zalik_book << "\n";
//	}
//};
//
//// --------------------------------
//
//// Новий клас Firefighter
//class Firefighter : public Person {
//	string rank;            // звание
//	int years_of_service;   // стаж
//public:
//	Firefighter() {
//		rank = "Senior Lieutenant";
//		years_of_service = 15;
//	}
//	Firefighter(string name, string surname, int age, string rank, int years)
//	{
//		this->rank = rank;
//		this->years_of_service = years;
//	}
//
//	void Print() const {
//		Person::Print();
//		cout << "Rank: " << rank << "\n";
//		cout << "Years of service: " << years_of_service << "\n";
//	}
//};
//
//int main() {
//	Person p;
//	cout << "---------------------\n\n";
//	p.SetName("Sergiy");
//	p.SetSurname("Kovalchuk");
//	p.Print();
//	cout << "\n";
//
//	Student s;
//	cout << "---------------------\n\n";
//	s.SetName("Nikita");
//	s.SetSurname("Gaber");
//	s.SetAge(16);
//	s.Print();
//	cout << "\n";
//
//	cout << "=====================\n\n";
//
//	Firefighter f;
//	f.SetName("Ivan");
//	f.SetSurname("Petrenko");
//	f.SetAge(45);
//	f.Print();
//	cout << "\n";
//	cout << "=====================\n";
//}

// ----------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//class Person {
//protected: // якщо заплановане успадкування, то є порада замість привата для полів робити протектед
//	string name;
//	string surname;
//	int age;
//public:
//	void SetName(string name) {
//		this->name = name;
//	}
//	void SetSurname(string surname) {
//		this->surname = surname;
//	}
//	void SetAge(int age) {
//		if (age < 0 || age > 126) this->age = 18;
//		else this->age = age;
//	}
//	string GetName() const {
//		return name;
//	}
//	string GetSurname() const {
//		return surname;
//	}
//	int GetAge() const {
//		return age;
//	}
//	/*Person() {
//		cout << "PERSON C-TOR WITHOUT PARAMS\n";
//		name = "Oleksandr";
//		surname = "Zahoruiko";
//		age = 36;
//	}*/ // Ctrl + /
//	Person(string name, string surname, int age) {
//		cout << "PERSON C-TOR WITH 3 PARAMS\n";
//		SetName(name);
//		SetSurname(surname);
//		SetAge(age);
//	}
//
//	// перша початкова версія методу на рівні БК
//	void Print() const {
//		cout << "Name: " << name << "\n";
//		cout << "Surname: " << surname << "\n";
//		cout << "Age: " << age << "\n";
//	}
//};
//
//class Student : public Person {
//protected:
//	string avg_rate;
//	int rates[50];
//	string zalik_book;
//public:
//	// якщо в базовому класі нема конструктоора без параметрів (основна причина цього - те, що в батьківському класі є конструктор З параметрами явний, а конструктора без параметрів явного нема, - компілятор вже не надаже конструктор за замовчуванням без параметрів)
//	// 1) - якщо э доступ до коду батьківського класу - саме просте - дописати конструктор без параметрів (це не завжди можливо, тому що код може бути частиною стандартноі бібліотеки, або код вже вкомпілбований і знаходиться в файлі .dll)
//	// 2) - якщо доступу до коду батька нема, то в класі-нащадкові при створенні конструкторів треба буде ЯВНО пояснювати, який саме спеціалізований конструктор з БК треба викликати
//	Student() : Person("Alex", "!@#$%", 45) {
//		SetName("");
//		SetSurname("");
//	}
//	Student(string name, string surname, int age) : Person(name, surname, age) {
//		cout << "STUDENT C-TOR WITH 3 PARAMS\n";
//		rates[0] = 12;
//		zalik_book = "AA00001";
//	}
//	// якщо дочірній клас робить метод з такою ж назвою, як в батька + з такими ж параметрами як  батька, щось доповнює в тілі метода або переробляє на свій розсуд - то це назівається
//	// override, перевизначення, переопределение
//	void Print() const {
//		Person::Print();
//		cout << "Rate: " << rates[0] << "\n";
//		cout << "ZB: " << zalik_book << "\n";
//	}
//};
//
//int main() {
//	//Person p;
//	//Person p2("aaaa", "bbbb", 123);
//
//	Student s("Petro", "Petrenko", 27);
//	s.Print();
//}