#include <iostream>
#include <string>
using namespace std;

// простий клас для дати
class Date {
    int day, month, year;
public:
    Date() { day = 1; month = 1; year = 2000; }
    Date(int d, int m, int y) { day = d; month = m; year = y; }

    void Show() {
        cout << day << "." << month << "." << year;
    }
};

// простий клас для адреси
class Address {
    string city, street;
    int house, flat;
public:
    Address() { city = "Unknown"; street = "Unknown"; house = 0; flat = 0; }
    Address(string c, string s, int h, int f) {
        city = c; street = s; house = h; flat = f;
    }

    void Show() {
        cout << city << ", " << street << " " << house << ", кв." << flat;
    }
};

// простий масив для оцінок
class Array {
    int* data;
    int size;
public:
    Array(int s = 0) {
        size = s;
        if (size > 0) data = new int[size];
        else data = nullptr;
    }

    Array(const Array& other) {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++) data[i] = other.data[i];
    }

    ~Array() {
        delete[] data;
    }

    void Set(int index, int value) {
        if (index >= 0 && index < size) data[index] = value;
    }

    void Show() {
        for (int i = 0; i < size; i++) cout << data[i] << " ";
    }
};

// клас студент
class Student {
    string surname, name, patronymic;
    Date birthday;
    Address address;
    string phone;

    Array hw;   // оцінки за ДЗ
    Array pr;   // оцінки за практики
    Array ex;   // оцінки за іспити

    static int counter; // кількість студентів

public:
    // конструктор без параметрів
    Student() : hw(0), pr(0), ex(0) {
        surname = "None";
        name = "None";
        patronymic = "None";
        phone = "None";
        counter++;
    }

    // конструктор з параметрами
    Student(string s, string n, string p, Date b, Address a, string ph,
        Array h, Array pArr, Array e) : hw(h), pr(pArr), ex(e) {
        surname = s;
        name = n;
        patronymic = p;
        birthday = b;
        address = a;
        phone = ph;
        counter++;
    }

    // конструктор копіювання
    Student(const Student& other) : hw(other.hw), pr(other.pr), ex(other.ex) {
        surname = other.surname;
        name = other.name;
        patronymic = other.patronymic;
        birthday = other.birthday;
        address = other.address;
        phone = other.phone;
        counter++;
    }

    ~Student() {
        counter--;
    }

    void Show() {
        cout << "====================\n";
        cout << "ПІБ: " << surname << " " << name << " " << patronymic << endl;
        cout << "Дата народження: "; birthday.Show(); cout << endl;
        cout << "Адреса: "; address.Show(); cout << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Оцінки (ДЗ): "; hw.Show(); cout << endl;
        cout << "Оцінки (Практика): "; pr.Show(); cout << endl;
        cout << "Оцінки (Іспити): "; ex.Show(); cout << endl;
        cout << "====================\n";
    }

    static int GetCount() { return counter; }
};

int Student::counter = 0;

// main
int main() {
    Array hw(3);
    hw.Set(0, 10); hw.Set(1, 9); hw.Set(2, 8);

    Array pr(2);
    pr.Set(0, 7); pr.Set(1, 12);

    Array ex(1);
    ex.Set(0, 11);

    Student st1("Іваненко", "Іван", "Іванович",
        Date(15, 5, 2002),
        Address("Одеса", "Дерибасівська", 10, 5),
        "+380123456789",
        hw, pr, ex);

    st1.Show();
    cout << "Зараз студентів: " << Student::GetCount() << endl;

    Student st2(st1); // копія
    st2.Show();
    cout << "Зараз студентів: " << Student::GetCount() << endl;

    return 0;
}
