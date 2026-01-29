#include <iostream>
#include <windows.h>
#include <string>
using namespace std;


//class Person {
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//
//public:
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    // проблема: якщо створити об'єкт то дуже часто він НЕ НАЛАШТОВАНИЙ на використання одразу
//    Person p;
//    // звісно, є сеттери, їх можна повикликати і все налаштувати
//    // 1) людина-програміст-користувач, що завантажить бібліотеку, 99% не буде читати документацію
//    // 2) користувачем можемо бути й ми (та людина що писала клас), і сеттерів може бути багато (особливо якщо будуть в код додані класи-нащадки)
//    p.setName("Vasyl");
//    p.setAge(19);
//    p.setEnergy(99);
//    p.setHealth(100);
//    p.setMoney(500);
//    // p.setMoney(p.getHealth() + 100);
//
//    p.printState();
//}

// ----------------------------------------------------------------------------

//class Person {
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//public:
//    // проблему первинного налаштування об'єктів (створили - використовуємо одразу) вирішують спеціальні методи класу - КОНСТРУКТОРИ
//    // конструктор - це метод без якого НЕ МОЖЕ БУТИ СТВОРЕНО ОБ'ЄКТ (конструктор в класі так чи інакше завжди присутній, просто питання в тому хто його зробить: або компілятор тихенечко, або програміст ЯВНО)
//    // 99% випадків, коли конструктор в класі створюється У СЕКЦІЇ ПАБЛІК
//    // завдання конструктора - ПРОІНІЦІАЛІЗУВАТИ ВСІ ПОЛЯ В КЛАСІ !!! якщо є поля-покажчики, то під них скоріш за все ТРЕБА БУДЕ ВИДІЛИТИ ПАМ'ЯТЬ !!!
//    // якщо якесь хочаб одне поле НЕ проініціалізувати, то буде а попередження від компілятора 
//    // синтаксичні особливості:
//    // 1) ідентифікатор конструктора (його назва) - ПОВНІСТЮ СПІВДАПАЄ З НАЗВОЮ КЛАСУ
//    // 2) типу значення що повертається з методу-конструктору НЕ БУДЕ ВЗАГАЛІ (його не треба писати)
//    // 3) круглі дужки обов'язково пишуться (це ознака методу), в конструктори приходить нульвий неявний параметр this), параметрів ЯВНИХ може бути нуль або більше (до 1024 штук)
//    // 4) всі поля реомендується заповнити (якщо це не зробити - буде попередження)
//    Person(string name, int age) {
//        this->name = name;
//        this->age = age;
//        health = 100;
//        energy = 100;
//        money = 5000;
//    }
//
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    Person p("Vasyl", 19);
//
//    p.printState();
//}

// ----------------------------------------------------------------------------

// порада по оптимізації:
// 1) спочатку пишуться приватні поля та геттери й сеттери до них
// 2) пишуться конструктор(и), В ЯКИХ ВИКЛИКАЮТЬСЯ СЕТТЕРИ !!!
//Person(string name, int age) {
//    setName(name);
//    setAge(age);
//    setHealth(100);
//    setEnergy(100);
//    setMoney(5000);
//}

// ----------------------------------------------------------------------------
// 
//class Person {
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//public:
//    // проблему первинного налаштування об'єктів (створили - використовуємо одразу) вирішують спеціальні методи класу - КОНСТРУКТОРИ
//    // конструктор - це метод без якого НЕ МОЖЕ БУТИ СТВОРЕНО ОБ'ЄКТ (конструктор в класі так чи інакше завжди присутній, просто питання в тому хто його зробить: або компілятор тихенечко, або програміст ЯВНО)
//    // 99% випадків, коли конструктор в класі створюється У СЕКЦІЇ ПАБЛІК
//    // завдання конструктора - ПРОІНІЦІАЛІЗУВАТИ ВСІ ПОЛЯ В КЛАСІ !!! якщо є поля-покажчики, то під них скоріш за все ТРЕБА БУДЕ ВИДІЛИТИ ПАМ'ЯТЬ !!!
//    // якщо якесь хочаб одне поле НЕ проініціалізувати, то буде а попередження від компілятора 
//    // порада по оптимізації:
//    // 1) спочатку пишуться приватні поля та геттери й сеттери до них
//    // 2) пишуться конструктор(и), В ЯКИХ ВИКЛИКАЮТЬСЯ СЕТТЕРИ !!!
//    Person(string name, int age) {
//        setName(name);
//        setAge(age);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(5000);
//    }
//
//    // конструктор за замочуванням - це конструктор без параметрів, АЛЕ НЕЯВНИЙ, його зробить компілятор, іто, лише якщо в класі НЕ БУЛО ІНШИХ КОНСТРУКТОРІВ
//    //  Person() {}
//
//    // конструктор БЕЗ параметрів (ЯВНИЙ, називати його конструктором за замовчуванням уже невірно)
//    Person() {
//        setName("Mykola");
//        setAge(18);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(0);
//    }
//    // порада: в кожному класі БАЖАНО зробити ЯВНО мінімум 2 конструктори: один без параметрів (так щоб клієнт міг швидко робити об'єкти без передачі додаткових значень + це буде дуже корисно при УСПАДКУВАННІ)
//    // ну і другий конструктор хоч з якимось набором параметрів (для різномаїття)
//
//
//
//
//
//
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    Person p("Vasyl", 19);
//    p.printState();
//
//    Person test; // помилка!
//    // до тієї пори, поки програміст не почне робити в тілі класа якісь конструктори явно, то
//    // КОМПІЛЯТОР НАДАВАВ в тілі класу так званий КОНСТРУКТОР ЗА ЗАМОЧУВАННЯМ
//    // це конструктор без параметрів, ЯКИЙ НІЧОГО НЕ РОБИТЬ (тіло в нього пусте)
//    // саме він і дозволяв створювати об'єкти швидко, хоч і не налаштовані
//    test.printState(); // Vasyl 20 100 1

// ----------------------------------------------------------------------------

//class Person {
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//public:
//    // ще один конструктор з параметрами (всі 5), конструктор це такий самий метод як і інші, а методи як і глобальні функції можна перевантажувати)
//    Person(string name, int age, int health, int energy, double money) {
//        setName(name);
//        setAge(age);
//        setHealth(health);
//        setEnergy(energy);
//        setMoney(money);
//    }
//
//    Person(string name, int age) {
//        setName(name);
//        setAge(age);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(5000);
//    }
//
//    Person() {
//        setName("Mykola");
//        setAge(18);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(0);
//    }
//
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    // приклад роботи трьох ЯВНИХ конструкторів
//    Person p;
//    p.printState();
//
//    Person a("Vasyl", 19);
//    a.printState();
//
//    Person b("Maryna", 20, 100, 100, 10000);
//    b.printState();
//}

// ----------------------------------------------------------------------------

//class Person {
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//public:
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//// навіть якщо клас повністю пустий (нема полів, нема методів), то компілятор додасть сюди автоматично
//// 1) одне поле типу чар (воно важить 1Б, і потрібно тому що об'єкт НЕ МОЖЕ БУТИ ПУСТИМ без полів і важити 0 байтів)
//// 2) 12 дефолтових методів (3 з яких це конструктори)
//class Cat {
//
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    // приклад роботи трьох ЯВНИХ конструкторів
//    Person p;
//    p.printState();
//
//    // якщо в класі не робити явно конструктори, то там буде не лише конструктор за замовчуванням, ай ще 2 конструктори (конструктор копіювання, конструктор перенесення)
//}

// ----------------------------------------------------------------------------

//class Person {
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//    string lastname;
//public:
//    // порада по оптимізації коду конструкторів:
//    // плюси: ми дали клієнту 3 способи створювати об'єкти
//    // мінуси: тіла конструкторів дуже схожі!!!
//    // проблема: якщо додати поле або декілька полів, то окрім геттерів та сеттерів, ДОВЕДЕТЬСЯ їх викликати В КОЖНОМУ конструкторі
//    // рішення: якщо конструктори дуже схожі по сигнатурах, можна обійтися параметрами за замовчуванням у конструкторі що приймає найбульшу кількість параметрів
//    Person(string name = "Mykola", int age = 18, int health = 100, int energy = 100, double money = 0) {
//        cout << "C-TOR!\n";
//        setName(name);
//        setAge(age);
//        setHealth(health);
//        setEnergy(energy);
//        setMoney(money);
//    }
//
//    // тепер 2 конструктори ниже будуть просто непотрібні !
//    /*Person(string name, int age) {
//        setName(name);
//        setAge(age);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(5000);
//    }
//
//    Person() {
//        setName("Mykola");
//        setAge(18);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(0);
//    } */
//
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    // приклад роботи трьох ЯВНИХ конструкторів
//    Person p1;
//    p1.printState();
//
//    Person p2("Alex");
//    p2.printState();
//
//    Person p3("Vasyl", 19);
//    p3.printState();
//
//    Person p4("Ihor", 19, 85);
//    p4.printState();
//
//    Person p5("Maryna", 20, 100, 100);
//    p5.printState();
//
//    Person p6("Oleh", 21, 100, 100, 999);
//    p6.printState();
//}

// ----------------------------------------------------------------------------

//class Person {
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//    string lastname;
//public:
//    // бувать випадки, коли сигнатури зовім різні
//    // тоді робиться делегування конструкторів
//
//    Person() {
//        setName("Mykola");
//        setAge(18);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(0);
//    }
//
//    // приклад сигнатури, що не схожа на інші
//    Person(short day, short month, short year) {
//        // наприклад, це три параметри що можуть відповідати за ДАТУ НАРОДЖЕННЯ людини
//        // 10 травня 2011
//        setName("Mykola");
//        SYSTEMTIME today;
//        GetSystemTime(&today);
//        cout << today.wYear << "\n"; // 2025
//        int result = today.wYear - year; // 2025 - 2011 = 14
//        setAge(result);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(0);
//    }
//
//    Person(string name, int age, int health, int energy, double money) {
//        cout << "C-TOR!\n";
//        setName(name);
//        setAge(age);
//        setHealth(health);
//        setEnergy(energy);
//        setMoney(money);
//    }
//
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    // приклад роботи трьох ЯВНИХ конструкторів
//    Person p1;
//    p1.printState();
//
//    Person p2(10, 5, 2011);
//    p2.printState();
//
//    Person p6("Oleh", 21, 100, 100, 999);
//    p6.printState();
//}

// ----------------------------------------------------------------------------

//class Person {
//
//    int age;
//    string name;
//    int energy;
//    int health;
//    double money;
//    string lastname;
//
//public:
//    // бувать випадки, коли сигнатури зовім різні
//    // тоді робиться делегування конструкторів
//    // 
//    Person() : Person("Mykola", 18, 100, 100, 0) {}
//    // цей явний конструктор без параметрів робить ті самі речі, що й інший конструктор з 5 параметрами (у нього теж є сет сет сет...)
//    // конструктор може передоручити свої іншому конструктору, який начебто робить те саме (не дублювати код)
//    //setName("Mykola");
//    //setAge(18);
//    //setHealth(100);
//    //setEnergy(100);
//    //setMoney(0);
//// }
//
//// приклад сигнатури, що не схожа на інші
//
//    Person(short day, short month, short year) : Person("Mykola", 18, 100, 100, 0) {
//        // при делегуванні тіло конструктора що делегує - не обов'язково буде пустим
//        // алгоритм по створенню об'єкта може бути складним (наприклад, якоьс вираховуємо вік)
//        // п'ять рядків коду нижче ніяк не передати в делегування : Person("Mykola", 18, 100, 100, 0)
//        SYSTEMTIME today;
//        GetSystemTime(&today);
//        cout << today.wYear << "\n"; // 2025
//        int result = today.wYear - year; // 2025 - 2011 = 14
//        setAge(result);
//        // принаймні, ще 4 сеттери тут уже не треба викликати, бо їх зробив інший конструктор
//    }
//
//    // main c-tor (робоча лошадка)
//
//    Person(string name, int age, int health, int energy, double money) {
//        cout << "C-TOR!\n";
//        setName(name);
//        setAge(age);
//        setHealth(health);
//        setEnergy(energy);
//        setMoney(money);
//    }
//
//    int getAge() const {
//        return age;
//    }
//
//    string getName() const {
//        return name;
//    }
//
//    int getEnergy() const {
//        return energy;
//    }
//
//    int getHealth() const {
//        return health;
//    }
//
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//
//    void setName(const string& name) {
//        this->name = name;
//    }
//
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//
//    void setHealth(int health) {
//        this->health = health;
//
//    }
//
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//    // приклад роботи трьох ЯВНИХ конструкторів
//    Person p1;
//    p1.printState();
//    Person p2(10, 5, 2011);
//    p2.printState();
//    Person p6("Oleh", 21, 100, 100, 999);
//    p6.printState();
//
//}

// ----------------------------------------------------------------------------

//class Person {
//    int age; // 4
//    string name; // 40 !!!
//    int energy; // 4
//    int health; // 4
//    double money; // 8
//
//public:
//    Person(string name, int age, int health, int energy, double money) {
//        cout << "C-TOR!\n";
//        setName(name);
//        setAge(age);
//        setHealth(health);
//        setEnergy(energy);
//        setMoney(money);
//    }
//
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const string& name) {
//        this->name = name;
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//    cout << sizeof(Person) << "\n"; // 64 !!!
//}

// ----------------------------------------------------------------------------

//class Person {
//    int age;
//    char* name; // покажчик на динамічний масив символів
//    int energy;
//    int health;
//    double money;
//
//public:
//    // якщо в класі будуть поля покажчики,
//    // то тоді конструктор зазвичай не лише створює об'єкт і задає значення полям, 
//    // а ще й виділяє пам'ять під такі поля
//    Person() {
//        cout << "C-TOR WITHOUT PARAMS!\n";
//        // якщо в класі є сеттери, то виділення пам'яті через нью можна зробити там
//        // якщо НЕМА сеттерів, то це робиться ТОЧНО в конструкторі
//        setName("Mykola");
//        setAge(18);
//        setHealth(100);
//        setEnergy(100);
//        setMoney(1000);
//    }
//
//    int getAge() const {
//        return age;
//    }
//    string getName() const {
//        return name;
//    }
//    int getEnergy() const {
//        return energy;
//    }
//    int getHealth() const {
//        return health;
//    }
//    double getMoney() const {
//        return money;
//    }
//
//    void setAge(int age) {
//        if (age < 0 || age > 150) throw "ERROR!\n";
//        this->age = age;
//    }
//    void setName(const char* name) {
//        int length = strlen(name) + 1; // +1 for \0
//        this->name = new char[length];
//        strcpy_s(this->name, length, name);
//    }
//    void setEnergy(int energy) {
//        this->energy = energy;
//    }
//    void setHealth(int health) {
//        this->health = health;
//    }
//    void setMoney(double money) {
//        this->money = money;
//    }
//
//    void sleep() {
//        energy += 10;
//        if (energy > 100) energy = 100;
//        cout << name << " спить.\n";
//    }
//
//    void work() {
//        if (energy >= 10 && health >= 10) {
//            energy -= 10;
//            health -= 10;
//            money += 100;
//            cout << name << " працює.\n";
//        }
//        else {
//            cout << name << " притомився щоб працювати.\n";
//        }
//    }
//
//    void makeBirthday() {
//        age += 1;
//        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
//    }
//
//    void printState() const {
//        cout << "Ім'я: " << name << "\n";
//        cout << "Вік: " << age << "\n";
//        cout << "Енергія: " << energy << "\n";
//        cout << "Здоровлячко: " << health << "\n";
//        cout << "Гроші: " << money << "\n";
//    }
//};
//
//int main() {
//    SetConsoleOutputCP(1251);
//    Person p;
//    p.printState();
//}