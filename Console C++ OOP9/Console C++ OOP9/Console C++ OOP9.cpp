// ------------------------------------------
#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;
//
//class Transport {
//	string description;
//
//public:
//	virtual void Drive() {
//		cout << "Transport::Drive()\n";
//	}
//};
//
//class Car : public Transport {
//public:
//	void Drive() {
//		cout << "Car::Drive()\n";
//	}
//};
//
//class Bike : public Transport {
//public:
//	void Drive() {
//		cout << "Bike::Drive()\n";
//	}
//};
//
//class Tram : public Transport {
//public:
//	void Drive() {
//		cout << "Tram::Drive()\n";
//	}
//};
//
//int main() {
//
//	srand(time(0));
//
//	unsigned int count;
//	cout << "How many elements: ";
//	cin >> count;
//	if (count > 10000) count = 10000;
//
//	auto ar = new Transport * [count];
//
//	for (int i = 0; i < count; i++)
//	{
//		int r = rand() % 3;
//		if (r == 0) ar[i] = new Car;
//		else if (r == 1) ar[i] = new Bike;
//		else ar[i] = new Tram;
//	}
//
//	for (int i = 0; i < count; i++)
//		ar[i]->Drive(); // поліморфний рядок коду
//}
// ------------------------------------------
//class Transport {
//	string description;
//
//public:
//	virtual void Drive() {
//		cout << "Transport::Drive()\n";
//	}
//};
//
//class Car : public Transport {
//public:
//	// правило віртуальності: якщо у батька метод віртуальний, то в класі-нащадкові той же перевизначений метод також буде автоматично віртуальним
//	// навіщо це потрібно? скоріш за все, нащадки будуть не луше у Транспорта, а й в його нащадків, таких як Автівка, Трамвай, Мотоцикл і тд
//	// але все ж таки є побажання ЯВНО вказувати ключове слово вірчуал в класах-нащадках
//	virtual void Drive() override {
//		cout << "Car::Drive()\n";
//	}
//};
//
//class Bike : public Transport {
//public:
//	virtual void Drive() override {
//		cout << "Bike::Drive()\n";
//	}
//};
//
//class Tram : public Transport {
//public:
//	virtual void Drive() override {
//		cout << "Tram::Drive()\n";
//	}
//};
//
//int main() {
//
//	srand(time(0));
//
//	unsigned int count;
//	cout << "How many elements: ";
//	cin >> count;
//	if (count > 10000) count = 10000;
//
//	auto ar = new Transport * [count];
//
//	for (int i = 0; i < count; i++)
//	{
//		int r = rand() % 3;
//		if (r == 0) ar[i] = new Car;
//		else if (r == 1) ar[i] = new Bike;
//		else ar[i] = new Tram;
//	}
//
//	for (int i = 0; i < count; i++)
//		ar[i]->Drive(); // поліморфний рядок коду
//}
// ------------------------------------------
//Віртуальний метод - це метод класу, який може бути перевизначений у класах - спадкоємцях так,
//що конкретна реалізація методу для виклику буде підбиратися під час виконання.
//Таким чином, програмісту необов'язково знати точний тип об'єкта для роботи з ним через віртуальні методи.
//
//поліморфізм надає змогу АБСТРАГУВАТИСЯ від точного типу об'єкта класа нащадка
// ------------------------------------------
//Віртуальні методи - це один із найважливіших прийомів реалізації поліморфізму.
//Вони дають змогу створювати загальний код,
//який може працювати як з об'єктами базового класу, так і з об'єктами будь - якого його класу - спадкоємця.
//При цьому базовий клас визначає наявність способу роботи з об'єктами, 
//а будь-які його спадкоємці можуть надавати конкретну реалізацію цього способу.
// ------------------------------------------
//class Food
//{
//public:
//	virtual void Print()
//	{
//		cout << "Food::Print()\n";
//	}
//};
//
//class Fish : public Food
//{
//public:
//	virtual void Print() override
//	{
//		cout << "Fish\n";
//	}
//};
//
//class HeatableFood : public Food
//{
//public:
//	virtual void Heat()
//	{
//		cout << "Food is heating...\n";
//		Sleep(1000);
//		cout << "DONE!\n";
//	}
//
//	virtual void Print() override
//	{
//		cout << "HeatableFood::Print()\n";
//	}
//};
//
//class RawEgg : public Food
//{
//public:
//
//	virtual void Print() override
//	{
//		cout << "RawEgg\n";
//	}
//};
//
//class Pizza : public HeatableFood
//{
//public:
//	virtual void Heat() override
//	{
//		cout << "Pizza is heating...\n";
//		Sleep(1000);
//		cout << "DONE!\n";
//	}
//	virtual void Print() override
//	{
//		cout << "Pizza\n";
//	}
//};
//
//class Oatmeal : public Food
//{
//public:
//
//	virtual void Print() override
//	{
//		cout << "Oatmeal\n";
//	}
//};
//
//class SmartPhone
//{
//public:
//
//	virtual void Print()
//	{
//		cout << "SmartPhone\n";
//	}
//};
//
//void Microwave(HeatableFood* food)
//{
//	food->Print();
//	food->Heat();
//}
//
//class Kakleta : public HeatableFood
//{
//public:
//	virtual void Heat() override
//	{
//		cout << "Kakleta is heating...\n";
//		Sleep(1000);
//		cout << "DONE!\n";
//	}
//	virtual void Print() override
//	{
//		cout << "Kakleta\n";
//	}
//
//};
//
//int main() {
//	Fish f;
//	RawEgg e;
//	Pizza p;
//	Oatmeal o;
//	SmartPhone s;
//	Kakleta k;
//
//	// Microwave(&f);
//	// Microwave(&e);
//	Microwave(&p);
//	//Microwave(&o);
//	// Microwave(&s);
//	Microwave(&k);
//}
// ------------------------------------------
//class Device {
//public:
//    virtual void Print() {
//        cout << "Device::Print()" << "\n";
//    }
//};
//
//class Smartphone : public Device {
//public:
//    void Print() override {
//        cout << "Smartphone" << "\n";
//    }
//};
//
//class Tablet : public Device {
//public:
//    void Print() override {
//        cout << "Tablet" << "\n";
//    }
//};
//
//void PrintDevice(Device& device) {
//    device.Print();
//}
//
//int main() {
//    Smartphone s1;
//    Smartphone s2;
//    Tablet t;
//    PrintDevice(s1);
//    PrintDevice(s2);
//    PrintDevice(t);
//}
// ------------------------------------------
//// приклад поліморфноі функціі
//void Microwave(HeatableFood& food)
//{
//	// полі - багато, морф - форма
//	food.Print(); // поліморфний рядок
//	food.Heat(); // на етапі компіляціі не відомо КОНКРЕТНИЙ тип об'єкта
//}
// ------------------------------------------
//Поліморфізм - це принцип, згідно       
//з яким є можливість використовувати один і той самий запис у коді для роботи з об'єктами різних типів даних. Коротко: "один інтерфейс, безліч реалізацій". 
//Поліморфізм дає змогу однаково працювати з об'єктами різних типів, підміняючи тільки самі об'єкти,  але не код з їхньої обробки.
// ------------------------------------------
//Технічно, поліморфізм - це наявність у коді покажчика(або посилання) базового типу, пов'язаного з адресою об'єкта будь - якого похідного типу.
// ------------------------------------------
//// overloading (перевантаження)
//int sum(int a, int b) {
//	return a + b;
//}
//
//int sum(int a, int b, int c) {
//	return a + b + c;
//}
//
//int main() {
//	sum(2, 3);
//}
//
//// ad-hoc поліморфізм (приклад статичного поліморфізму, коли компілятор може проаналізувати,
// яку версію функціі викликати, виходячи з наявного коду)
// ------------------------------------------
//template <typename T>
//
//void bubble_sort(T ar[], int count) {
//
//	for (int pr = 0; pr < count; pr++)
//
//	{
//
//		for (int i = count - 1; i > 0; i--)
//
//		{
//
//			if (ar[i] < ar[i - 1]) {
//
//				T temp = ar[i];
//
//				ar[i] = ar[i - 1];
//
//				ar[i - 1] = temp;
//
//			}
//
//		}
//
//	}
//
//}
//
//int main() {
//
//	const int size = 18;
//
//	int ar[size] = { 1,7,3,6,5,64,56,34,563,45,634,56,4567,2,45,3567,53,456 };
//
//	for (int i = 0; i < size; i++)
//
//	{
//
//		cout << ar[i] << ", ";
//
//	}
//
//	bubble_sort(ar, size);
//
//	cout << endl << endl;
//
//	for (int i = 0; i < size; i++)
//
//	{
//
//		cout << ar[i] << ", ";
//
//	}
//
//}
//
//// параметричний поліморфізм 
//// (приклад статичного поліморфізму, коли компілятор може проаналізувати, 
//// яку версію функціі треба створити на базі шаблона, та викликати, виходячи з наявного коду)
// ------------------------------------------
//class Food
//{
//	int x; // 4
//	double y; // 8
//
//public:
//	void Print()
//	{
//		cout << "Food::Print()\n";
//	}
//};
//
//int main() {
//	cout << sizeof(Food) << "\n"; // 4 + 12 = 16 (тому що є вирівнювання alignment)
//}
// ------------------------------------------
//class Food
//{
//	double y; // 8
//	int x; // 4
//	// ???
//
//public:
//	virtual void Print()
//	{
//		cout << "Food::Print()\n";
//	}
//	virtual void AAA()
//	{
//		cout << "Food::Print()\n";
//	}
//	virtual void BBB()
//	{
//		cout << "Food::Print()\n";
//	}
//};
//
//int main() {
//	cout << sizeof(Food) << "\n"; // 4 + 8 + virtual = 24 !!!
//	// 4 - int
//	// 4 - smittya (alignment)
//	// 8 - double
//	// 8 - pointer !!!
//}
// ------------------------------------------
//class Dog
//{
//	// void** __vfptr;
//	// VPTR - вказівник на таблицю VTABLE (по одному вказівнику на кожен об'єкт!)
//
//	// static void* Dog::vftable[2];
//	// сама "таблиця" (тільки одна на всі об'єкти!)
//
//public:
//	char* name;
//	int age;
//
//	/* Dog()
//	{
//		// __vfptr = Dog::vftable; // неявне зв'язування вказівника з таблицею
//		// ... інші явні дії програміста
//	} */
//
//	virtual void Guard()
//	{
//		cout << "Dog::Guard()\n";
//	}
//
//	virtual void Bark()
//	{
//		cout << "Dog::Bark()\n";
//	}
//
//	static void Print()
//	{
//		cout << "Dog::Print()\n";
//	}
//};
//
//class Mops : public Dog
//{
//	// успадкований
//	// void** __vfptr; // VPTR - вказівник на таблицю VTABLE (по одному вказівнику на кожен об'єкт)
//
//	// статичні компоненти не успадковуються, - це вже нова таблиця!
//	// static void* Mops::vftable[2]; // таблиця (одна на клас)
//
//public:
//	int mops_field;
//
//	/* Mops()
//	{
//		// __vfptr = Mops::vftable; // неявне зв'язування вказівника з новою таблицею
//		// ... інші явні дії програміста
//	} */
//
//	void Guard() // перевизначення методу, тому в "таблиці" - нова адреса
//	{
//		cout << "Mops::Guard()\n";
//	}
//
//	void Bark()
//	{
//		cout << "Mops::Bark()\n";
//	}
//};
//
//int main() {
//	setlocale(0, "UKR");
//
//	Mops m;
//	cout << "Адреса об'єкта m типу Mops: ";
//	cout << &m << "\n";
//	// тут можна встановити брейкпойнт
//	// і перевірити вміст об'єкта Mops
//
//	//////////////////////////////////////////////////////////////////////
//
//	// псевдокод налаштування VTABLE для класу Dog:
//	// Dog::vftable[0] = &Dog::Guard;
//	// Dog::vftable[1] = &Dog::Bark;
//
//	Dog* d = new Dog;
//	// у конструкторі Dog() для динамічно створеного об'єкта відбулося зв'язування VPTR і VTABLE
//	// __vfptr = Dog::vftable;
//
//	d->Guard(); // <--- ми, земляни, пишемо так :)
//
//	// але насправді компілятор сюди підставляє щось на кшталт:
//	// d->__vfptr[0](); // 0 - це індекс методу Guard
//
//	d->Bark(); // d->__vfptr[1]();
//}
// ------------------------------------------
//class Transport
//{
//protected:
//	string description;
//
//public:
//	Transport()
//	{
//		cout << "Transport::CTOR\n";
//	}
//
//	virtual void Drive()
//	{
//		cout << "Transport::Drive()\n";
//	}
//
//	// https://coderoad.ru/630950/%D0%A7%D0%B8%D1%81%D1%82%D1%8B%D0%B9-%D0%B2%D0%B8%D1%80%D1%82%D1%83%D0%B…
//	// https://progi.pro/net-virtualnih-konstruktorov-krome-virtualnogo-destruktora-10535369
//	// https://progi.pro/pochemu-destruktori-ne-yavlyayutsya-virtualnimi-po-umolchaniyu-s-10050334
//	virtual ~Transport() {
//		cout << "Transport::DEST\n";
//	}
//};
//
//class Truck : public Transport // вантажівка
//{
//	char* load; // вантаж
//
//public:
//	Truck()
//	{
//		cout << "Truck::CTOR\n";
//		load = new char[100000]; // одна вантажівка = 100000Б
//	}
//
//	virtual ~Truck()
//	{
//		cout << "Truck::DEST\n";
//		delete[] load;
//	}
//
//	virtual void Drive() final
//	{
//		cout << "Truck::Drive\n";
//	}
//};
//
//
//class Minibus : public Transport // маршрутка
//{
//	int* passengers;
//
//public:
//	Minibus()
//	{
//		cout << "Minibus::CTOR\n";
//		passengers = new int[rand() % 40];
//	}
//
//	virtual ~Minibus()
//	{
//		cout << "Minibus::DEST\n";
//		delete[] passengers;
//	}
//
//	virtual void Drive() final
//	{
//		cout << "Minibus::Drive\n";
//	}
//};
//
//int main() {
//	while (true)
//	{
//		Transport* t = new Truck;
//		delete t;
//	}
//}
// ------------------------------------------
//Абстракные классы
// ------------------------------------------
//class Transport abstract {
//	string description;
//
//public:
//	virtual void Drive() {
//		cout << "Transport::Drive()\n";
//	}
//};
//
//class Car : public Transport {
//public:
//	void Drive() {
//		cout << "Car::Drive()\n";
//	}
//};
//
//class Bike : public Transport {
//public:
//	void Drive() {
//		cout << "Bike::Drive()\n";
//	}
//};
//
//class Tram : public Transport {
//public:
//	void Drive() {
//		cout << "Tram::Drive()\n";
//	}
//};
//
//int main() {
//	// Transport t;
//	// Transport* t = new Transport();
//	Transport* t = new Car();
//	Car c;
//	Bike b;
//
//	// єдина відмінність абстрактного класу від конкретного в тому, що
//	// не можна (бо не потрібно) створювати ОБ'ЄКТИ абстрактного типу (бо в реальності як дещо матеріальне) іх не існує
//	// але можна (і потрібно для поліморфізму) робити покажчики або посилання типу батьківського абстрактного типу
//}
// ------------------------------------------
//Абстракные методы, касается только виртуальных методов
// ------------------------------------------
//class Transport abstract {
//	string description;
//
//public:
//	virtual void Drive() {
//		cout << "Transport::Drive()\n";
//	}
//};
//
//class Car : public Transport {
//public:
//	void Drive() {
//		cout << "Car::Drive()\n";
//	}
//};
//
//class Bike : public Transport {
//public:
//	void Drive() {
//		cout << "Bike::Drive()\n";
//	}
//};
//
//class Tram : public Transport {
//public:
//	void Drive() {
//		cout << "Tram::Drive()\n";
//	}
//};
//
//int main() {
//	// Transport t;
//	// Transport* t = new Transport();
//	Transport* t = new Car();
//	Car c;
//	Bike b;
//
//	// єдина відмінність абстрактного класу від конкретного в тому, що
//	// не можна (бо не потрібно) створювати ОБ'ЄКТИ абстрактного типу (бо в реальності як дещо матеріальне) іх не існує
//	// але можна (і потрібно для поліморфізму) робити покажчики або посилання типу батьківського абстрактного типу
//
//
//}
// ------------------------------------------
//class Transport abstract {
//	string description;
//
//public:
//	virtual void Drive() abstract;
//}; // батьківський клас надає інтерфейс (каже, що можна іздити) - АЛЕ НЕ КАЖЕ ЯК САМЕ
//// це буде вимога для нащадків, щоб вони ОБОВ'ЯЗКОВО надали свою реалізацію, інакше і клас-нащадок АВТОМАТИЧНО теж стане абстрактним
//
//class Car : public Transport {
//public:
//	virtual void Drive() {
//		cout << "CAR DRIVE !";
//	}
//};
//
//int main() {
//	Car c;
//	c.Drive();
//}
// ------------------------------------------