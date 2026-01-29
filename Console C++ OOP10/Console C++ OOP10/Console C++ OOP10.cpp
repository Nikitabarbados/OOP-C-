#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// ---------------------------------------------------------
//class Animal final abstract{
//
//};
//
//class Cat : public Animal {
//
//};
//
//void main() {
//	Animal a;
//}
// ---------------------------------------------------------
//Абстрактний клас - це заготовка для майбутніх класів.
// ---------------------------------------------------------
//class Animal abstract
//{
//protected:
//    string name;
//    double weight;
//
//public:
//    Animal()
//    {
//        cout << "Конструктор Animal за замовчуванням!\n";
//    }
//
//    void Eat()
//    {
//        cout << "У всiх тварин є здатнiсть до харчування\n";
//    }
//
//    void Breath()
//    {
//        cout << "У всiх тварин є здатнiсть до дихання\n";
//    }
//
//    void Growth()
//    {
//        cout << "У всiх тварин є здатнiсть до зростання\n";
//    }
//};
//
//class Mammal abstract : public Animal
//{
//protected:
//    int teeth;
//    string diafragma;
//    int age;
//
//public:
//    Mammal()
//    {
//        cout << "Конструктор Mammal за замовчуванням!\n";
//    }
//
//    void Suckle()
//    {
//        cout << "У ссавцiв є здатність вигодовувати молоком\n";
//    }
//};
//
//class Cat abstract : public Mammal
//{
//protected:
//    string breed; // порода
//
//public:
//    Cat()
//    {
//        cout << "Конструктор Cat за замовчуванням!\n";
//    }
//
//    void About()
//    {
//        cout << "Кiт на iм'я " << name << "\n";
//        cout << "Вiк: " << age << "\n";
//    }
//};
//
//class Munchkin : public Cat
//{
//protected:
//    short height;
//
//public:
//    Munchkin()
//    {
//        cout << "Конструктор Munchkin за замовчуванням!\n";
//    }
//
//public:
//    void About() // перевизначення!
//    {
//        Cat::About();
//        cout << "Зрiст: " << height << " см\n";
//    }
//};
//
//int main() {
//    setlocale(0, "UKR");
//    // Animal* a = new Animal();
//    // Animal* a = new Mammal();
//    // Animal* a = new Cat(); // Cat є абстрактним; не може бути створений!
//    Animal* a = new Munchkin();
//    a->Breath();
//    a->Eat();
//    a->Growth();
//    //a->About();
//}
// 
// єдина відмінність АК від звичайного класу - НЕ МОЖНА СВТОРИТИ ОБ'ЄКТ абстрактного типу
// ---------------------------------------------------------
//КЛАС = ПОЛЯ + МЕТОДИ
//КЛАС = СТАН + ПОВЕДІНКА
//
//КЛАС = ІНТЕРФЕЙС(відкрита частина) + РЕАЛІЗАЦІЯ(закрита частина)
//
//ІНТЕРФЕЙС = КЛАС - РЕАЛІЗАЦІЯ
//
//коротке визначення інтерфейса - це тип БЕЗ реалізації(приватні поля, приватні методи, тіла методів - відсутні!!!)
//
//класично, в інтерфейсі є 0, 1 або рідше декілька публічних методів без тіл(абстрактних, або чисто віртуальних)
// ---------------------------------------------------------
//ІНТЕРФЕЙС = КЛАС - СТАН(тип, в якому зазначена ЛИШЕ ПОВЕДІНКА,
//і то, є просто список ДІЙ - що треба зробити, АЛЕ!нема інструкцій, ЯК ЦЕ ТРЕБА ЗРОБИТИ!!!)
//
//ПомитиПосуд - це інтерфейс
//
//є посудомиєчна машина
//є молодший брат або сестра
//є водопостачання
//є річка
//
//ми при бажанні реалізуємо інтерфейс(виконуємо умови контракту),
//реалізація - це один із способів написати в коді ЯК САМЕ ця дія буде виконана
// ---------------------------------------------------------
//__interface VodijMarshrutki {
//    // int name = "Oleg"; // в інтерфейсі не може бути стану!!!
//    void Drive(); // всі ці методи - публічні та віртуальні (автоматично)
//    void BratZaProezd(); // кожен з цих методів - це УМОВА КОНТРАКТУ!!!
//    void DavatSdachi();
//    void PytyKavu();
//    void Bibikat();
//    void SpeakTelephone();
//    void SluhatRadio();
//};
//
//// клас для конкретних людей по імені Олег, і цей клас РЕАЛІЗУЄ ІНТЕРФЕЙС БУТИ ВОДІЄМ МАРШРУТКИ
//class Oleg : public VodijMarshrutki {
//public:
//    void Drive() {
//        cout << "Oleg perevyschue shvydlist!!" << endl;
//    }
//    void BratZaProezd() {
//        cout << "Oleg bere groshi" << endl;
//    }
//    void DavatSdachi() {
//        cout << "Postijno zabuvae" << endl;
//    }
//    void PytyKavu() {
//        cout << "Syorbae kohve za 14 grn" << endl;
//    }
//    void Bibikat() {
//        // ...
//    }
//    void SpeakTelephone() {}
//    void SluhatRadio() {}
//};
//
//int main() {
//    setlocale(0, "UKR");
//    Oleg o;
//    o.PytyKavu();
//}
// ---------------------------------------------------------
//__interface VodijMarshrutki {
//    // int name = "Oleg"; // в інтерфейсі не може бути стану!!!
//    void Drive(); // всі ці методи - публічні та віртуальні (автоматично)
//    void BratZaProezd(); // кожен з цих методів - це УМОВА КОНТРАКТУ!!!
//    void DavatSdachi();
//    void PytyKavu();
//    void Bibikat();
//    void SpeakTelephone();
//    void SluhatRadio() {
//        cout << "!!!!";
//    }
//};
//
//// клас для конкретних людей по імені Олег, і цей клас РЕАЛІЗУЄ ІНТЕРФЕЙС БУТИ ВОДІЄМ МАРШРУТКИ
//class Oleg : public VodijMarshrutki {
//public:
//    void Drive() {
//        cout << "Oleg perevyschue shvydlist!!" << endl;
//    }
//    void BratZaProezd() {
//        cout << "Oleg bere groshi" << endl;
//    }
//    void DavatSdachi() {
//        cout << "Postijno zabuvae" << endl;
//    }
//    void PytyKavu() {
//        cout << "Syorbae kohve za 14 grn" << endl;
//    }
//    void Bibikat() {
//        // ...
//    }
//    void SpeakTelephone() {}
//    void SluhatRadio() {
//        VodijMarshrutki::SluhatRadio();
//    }
//};
//
//int main() {
//    setlocale(0, "UKR");
//    Oleg o;
//    o.PytyKavu();
//    o.SluhatRadio();
//}
// ---------------------------------------------------------
//Інтерфейс містить опис(декларацію) методів, реалізацію яких зобов'язується здійснити клас-спадкоємець.
//Тобто, як і абстрактні класи, інтерфейси створюються не просто так, а для того, щоб їх надалі хтось реалізував. 
//Це свого роду "контракт" (протокол взаємодії) для всіх класів, які бажають "імплементувати" вимоги інтерфейсу.
//Будь-який клас може реалізувати будь-яку кількість інтерфейсів. Але при цьому клас повинен реалізувати всі їхні методи!
// ---------------------------------------------------------
// За стандартом C++, окремого ключового слова для створення інтерфейсів немає
// І для конкретних, і для абстрактних класів, і для інтерфейсів використовується class

// Рекомендація: перед назвою типу інтерфейсу ставити велику літеру I
// Також часто можна зустріти суфікс -able
//class IFlyable // щось літаюче
//{
//	// Зазвичай в інтерфейсі НЕМАЄ ПОЛІВ, немає приватних методів і немає тіл у публічних методів
//	// Інтерфейс — це контракт, що технічно виражено як список прототипів публічних чисто віртуальних методів
//	// Рекомендація з проєктування інтерфейсів: небажано оголошувати в інтерфейсі більше одного методу
//public:
//	virtual void Fly() = 0;
//};
//
//class ITweetable // чирикаюче (наприклад, для горобця)
//{
//public:
//	virtual void Tweet() = 0;
//};
//
//class ISwimable // щось плаваюче
//{
//public:
//	virtual void Swim() = 0;
//};
//
//class IEdible // щось їстівне
//{
//public:
//	virtual void Eat() = 0;
//};
//
//// Абстрактний клас
//class Bird abstract
//{
//	string description;
//};
//
//// Приклад РЕАЛІЗАЦІЇ ІНТЕРФЕЙСУ (інтерфейси НЕ успадковуються, а реалізуються!)
//class Pigeon : /*extends*/ public Bird, /*implements*/ public IFlyable {
//public:
//	Pigeon() {
//		cout << "Pigeon\n";
//	}
//	// Приклад реалізації інтерфейсу
//	virtual void Fly() {
//		cout << "махає крилами\n";
//	}
//};
//
//class Hen : public Bird, public IEdible {
//public:
//	Hen() {
//		cout << "Hen\n";
//	}
//};
//
//////////////////////////////////////////////////////////////////////////////////////
//
//class Airplane : public IFlyable
//{
//public:
//	virtual void Fly()
//	{
//		cout << "ввжжжжжжжжжжжжжжж\n";
//	}
//};
//
//class Sparrow : public Bird, public ITweetable
//{
//	double weight;
//
//public:
//	virtual void Fly()
//	{
//		// PlaySound("звук_крыльев.wav", NULL, SND_FILENAME);
//	}
//
//	virtual void Tweet()
//	{
//		cout << "чирик-чирик!\n";
//	}
//
//	virtual void Eat()
//	{
//		weight += 0.01;
//	}
//};
//
//class Penguin : public Bird, public ISwimable
//{
//public:
//
//};
//
//int main() {
//	setlocale(0, "UKR");
//	// IFlyable test; // об'єкти типу інтерфейсу створити не вдасться - створюються тільки вказівники та посилання!
//	// Bird b; // об'єкти типу АК також не створюються
//	Pigeon kurlyk;
//}
// ---------------------------------------------------------
//__interface IFlyable {
//	void Fly();
//};
//
//ключове слово тільки для віжуал студіі
//
//class IFlyable abstract // щось літаюче
//{
//	// Зазвичай в інтерфейсі НЕМАЄ ПОЛІВ, немає приватних методів і немає тіл у публічних методів
//	// Інтерфейс — це контракт, що технічно виражено як список прототипів публічних чисто віртуальних методів
//	// Рекомендація з проєктування інтерфейсів: небажано оголошувати в інтерфейсі більше одного методу
//public:
//	virtual void Fly() = 0;
//};
//
//такий код спрацює в будь якій ІДЕ
// ---------------------------------------------------------
//__interface IFlyable {
//	void Fly();
//};
//
//__interface ITweetable {
//	void Tweet();
//};
//
//__interface ISwimable {
//	void Swim();
//};
//
//__interface IEdible {
//	void Eat();
//};
//
//class Bird abstract {
//protected:
//	string description;
//};
//
//class Pigeon : public Bird, public IFlyable, public IEdible {
//public:
//	Pigeon() {
//		cout << "Pigeon\n";
//	}
//	virtual void Fly() { // реалізація інтерфейсів
//		cout << "махає крилами\n";
//	}
//	virtual void Eat() { // якщо не реалізувати один з методів інтерфейсу, то клас автоматично стане абстрактним, і не вийде потім зробити хоч один об'єкт класу
//		cout << "їсть зернятка\n";
//	}
//};
//
//class Hen : public Bird, public IEdible {
//public:
//	Hen() {
//		cout << "Hen\n";
//	}
//	virtual void Eat() { // якщо не реалізувати один з методів інтерфейсу, то клас автоматично стане абстрактним, і не вийде потім зробити хоч один об'єкт класу
//		cout << "їсть зернятка\n";
//	}
//};
//
//class Airplane : public IFlyable
//{
//public:
//	virtual void Fly()
//	{
//		cout << "ввжжжжжжжжжжжжжжж\n";
//	}
//};
//
//class Sparrow : public Bird, public ITweetable, public IEdible
//{
//	double weight;
//
//public:
//	virtual void Fly()
//	{
//		// PlaySound("звук_крыльев.wav", NULL, SND_FILENAME);
//	}
//
//	virtual void Tweet()
//	{
//		cout << "чирик-чирик!\n";
//	}
//
//	virtual void Eat()
//	{
//		weight += 0.01;
//	}
//};
//
//class Penguin : public Bird, public ISwimable
//{
//public:
//
//};
//
//int main() {
//	setlocale(0, "UKR");
//	// IFlyable test; // об'єкти типу інтерфейсу створити не вдасться - створюються тільки вказівники та посилання!
//	// Bird b; // об'єкти типу АК також не створюються
//	Pigeon kurlyk;
//}
// ---------------------------------------------------------
//__interface IOpenable
//{
//	void Open();
//};
//
//class Key : public IOpenable
//{
//public:
//	void Open()
//	{
//		cout << "door has been opened by key.\n";
//	}
//};
//
//class MagnetCard : public IOpenable
//{
//public:
//	void Open()
//	{
//		cout << "door has been opened by magnetic card.\n";
//	}
//};
//
//class PinCode : public IOpenable
//{
//public:
//	void Open()
//	{
//		cout << "enter PIN-code: ";
//		int pin;
//		cin >> pin;
//
//		if (pin == 1111)
//			cout << "welcome home!\n";
//	}
//};
//
//class Leg : public IOpenable
//{
//public:
//	void Open()
//	{
//		if (rand() % 2 == 0)
//		{
//			cout << "door has been opened by left leg.\n";
//		}
//		else
//		{
//			cout << "door has been opened by right leg.\n";
//		}
//	}
//};
//
//// поліморфна глобальна функція
//// параметр типу інтерфейсного посилання забезпечує динамічний поліморфізм
//void OpenTheDoorBy(IOpenable& item)
//{
//	item.Open();
//}
//
//int main() {
//	setlocale(0, "UKR");
//
//	Key key;
//	MagnetCard card;
//	Leg leg;
//	PinCode pin;
//
//	OpenTheDoorBy(key);
//	OpenTheDoorBy(pin);
//	OpenTheDoorBy(card);
//	OpenTheDoorBy(leg);
//}
// ---------------------------------------------------------
//Абстрагування - це виділення суттєвих характеристик об'єкта та відкидання несуттєвих.
//Абстракція - це узагальнення.  
//А узагальнювати ми можемо в будь-який момент часу. Втрачаємо в деталізації, зате виграємо в охопленні.
//
//Абстрактний клас - це заготовка для майбутніх класів.
//Ми делегуємо реалізацію тих методів, які не визначені, похідним класам.
//Інтерфейс - це контракт для майбутніх класів.
//Це набір зобов'язань для якихось класів, які якщо беруть ці зобов'язання, то мають їх реалізувати.
//Інтерфейс це не просто контракт, це завжди публічний контракт.
//Інтерфейс не успадковують, а реалізують.
//При цьому клас може виконувати кілька різних контрактів, а значить може реалізовувати кілька різних інтерфейсів.
//Головне - це робота з об'єктами через інтерфейсні покажчики. 
//Інтерфейс - це максимально абстрактна сутність в ООП.
//Найчистіший, незамутнений динамічний поліморфізм. 
//Інтерфейси не є заміною множинного успадкування в тих мовах, де воно не реалізоване.
// ---------------------------------------------------------
//Cat c; // інкапсуляція
//Animal* a = &c; // успадкування
//a->sleep(); // поліморфізм
// ---------------------------------------------------------
//Різниця між Інтерфейсом і АК
//
//З одного боку, нічого спільного : один - набір вимог, чиста абстракція, а другий - по суті звичайний,
//але трохи недороблений клас.Але з іншого боку, з погляду ООП - моделювання - навпаки, 
//між інтерфейсами й абстрактними класами жодної особливої різниці немає.
//І те, і інше визначає "абстрактний інтерфейс" для сімейства об'єктів, і різниця лише в тому, чи є поведінка за замовчуванням.
// ---------------------------------------------------------
//void main() {
//    setlocale(0, "");
//    // запис в файл
//    ofstream outFile("example.txt");
//    if (!outFile) {
//        cout << "помилка!\n";
//        return;
//    }
//
//    // записуємо 10 рядків
//    for (int i = 1; i <= 10; ++i) {
//        outFile << "Рядок номер " << i << "\n";
//    }
//    outFile.close();
//
//    // читання з файлу
//    ifstream inFile("example.txt");
//    if (!inFile) {
//        cout << "помилка!\n";
//        return;
//    }
//
//    // читаємо файл порядково
//    string line;
//    while (getline(inFile, line)) {
//        cout << line << "\n";
//    }
//    inFile.close();
//}
// ---------------------------------------------------------
//void main() {
//    setlocale(0, "");
//    // запис в файл
//    ofstream outFile("example.txt");
//    if (!outFile) {
//        cout << "помилка!\n";
//        return;
//    }
//
//    // записуємо 10 рядків
//    for (int i = 1; i <= 10; ++i) {
//        outFile << "Рядок номер " << i << "\n";
//    }
//    outFile.close();
//
//    // читання з файлу
//    ifstream inFile("example.txt");
//    if (!inFile) {
//        cout << "помилка!\n";
//        return;
//    }
//
//    // читаємо файл порядково
//    string line;
//    while (getline(inFile, line)) {
//        cout << line << "\n";
//    }
//    inFile.close();
//}
// ---------------------------------------------------------