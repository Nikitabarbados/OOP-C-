#include <iostream>
#include <string>
using namespace std;

// Клас Car
class Car {
private:
    string brand;
    string model;
    string color;
    int wheels;
    double price;
    double engineCapacity;
    int fuelLevel;

public:
    void SetBrand(string brand) { this->brand = brand; }
    void SetModel(string model) { this->model = model; }
    void SetColor(string color) { this->color = color; }
    void SetWheels(int wheels) { this->wheels = wheels; }
    void SetPrice(double price) { this->price = price; }
    void SetEngineCapacity(double engineCapacity) { this->engineCapacity = engineCapacity; }
    void SetFuelLevel(int fuelLevel) { this->fuelLevel = fuelLevel; }

    string GetBrand() { return brand; }
    string GetModel() { return model; }
    string GetColor() { return color; }
    int GetWheels() { return wheels; }
    double GetPrice() { return price; }
    double GetEngineCapacity() { return engineCapacity; }
    int GetFuelLevel() { return fuelLevel; }
};

// Клас Book
class Book {
private:
    string title;
    string author;
    int pages;
    double price;

public:
    void SetTitle(string title) { this->title = title; }
    void SetAuthor(string author) { this->author = author; }
    void SetPages(int pages) { this->pages = pages; }
    void SetPrice(double price) { this->price = price; }

    string GetTitle() { return title; }
    string GetAuthor() { return author; }
    int GetPages() { return pages; }
    double GetPrice() { return price; }
};

// Клас Smartphone
class Smartphone {
private:
    string brand;
    string model;
    string color;
    int phone;
    string name;
    double price;
    double screenSize;
    int phoneMemory;
    int batteryCapacity;

public:
    void SetBrand(string brand) { this->brand = brand; }
    void SetModel(string model) { this->model = model; }
    void SetColor(string color) { this->color = color; }
    void SetPhone(int phone) { this->phone = phone; }
    void SetName(string name) { this->name = name; }
    void SetPrice(double price) { this->price = price; }
    void SetScreenSize(double screenSize) { this->screenSize = screenSize; }
    void SetPhoneMemory(int phoneMemory) { this->phoneMemory = phoneMemory; }
    void SetBatteryCapacity(int batteryCapacity) { this->batteryCapacity = batteryCapacity; }

    string GetBrand() { return brand; }
    string GetModel() { return model; }
    string GetColor() { return color; }
    int GetPhone() { return phone; }
    string GetName() { return name; }
    double GetPrice() { return price; }
    double GetScreenSize() { return screenSize; }
    int GetPhoneMemory() { return phoneMemory; }
    int GetBatteryCapacity() { return batteryCapacity; }
};

// Клас Pen
class Pen {
private:
    string color;
    string type;
    double price;
    int inkLevel;

public:
    void SetColor(string color) { this->color = color; }
    void SetType(string type) { this->type = type; }
    void SetPrice(double price) { this->price = price; }
    void SetInkLevel(int inkLevel) { this->inkLevel = inkLevel; }

    string GetColor() { return color; }
    string GetType() { return type; }
    double GetPrice() { return price; }
    int GetInkLevel() { return inkLevel; }
};

// Клас Headphones
class Headphones {
private:
    string color;
    string type;
    double price;
    int batteryCapacity;

public:
    void SetColor(string color) { this->color = color; }
    void SetType(string type) { this->type = type; }
    void SetPrice(double price) { this->price = price; }
    void SetBatteryCapacity(int batteryCapacity) { this->batteryCapacity = batteryCapacity; }

    string GetColor() { return color; }
    string GetType() { return type; }
    double GetPrice() { return price; }
    int GetBatteryCapacity() { return batteryCapacity; }
};

// Точка входу
int main() {
    // Car
    Car myCar;
    myCar.SetBrand("Toyota");
    myCar.SetModel("Camry");
    myCar.SetColor("Black");
    myCar.SetWheels(4);
    myCar.SetPrice(25000);
    myCar.SetEngineCapacity(2.5);
    myCar.SetFuelLevel(85);

    cout << "Car:\n";
    cout << "Brand: " << myCar.GetBrand() << "\n";
    cout << "Model: " << myCar.GetModel() << "\n";
    cout << "Color: " << myCar.GetColor() << "\n";
    cout << "Wheels: " << myCar.GetWheels() << "\n";
    cout << "Price: $" << myCar.GetPrice() << "\n";
    cout << "Engine Capacity: " << myCar.GetEngineCapacity() << "L\n";
    cout << "Fuel Level: " << myCar.GetFuelLevel() << "%\n\n";

    // Book
    Book myBook;
    myBook.SetTitle("The Great Gatsby");
    myBook.SetAuthor("F. Scott Fitzgerald");
    myBook.SetPages(180);
    myBook.SetPrice(15.99);

    cout << "Book:\n";
    cout << "Title: " << myBook.GetTitle() << "\n";
    cout << "Author: " << myBook.GetAuthor() << "\n";
    cout << "Pages: " << myBook.GetPages() << "\n";
    cout << "Price: $" << myBook.GetPrice() << "\n\n";

    // Smartphone
    Smartphone myPhone;
    myPhone.SetBrand("Apple");
    myPhone.SetModel("iPhone 15");
    myPhone.SetColor("Silver");
    myPhone.SetPhone(123456789);
    myPhone.SetName("Мій Айфон");
    myPhone.SetPrice(999.99);
    myPhone.SetScreenSize(6.1);
    myPhone.SetPhoneMemory(256);
    myPhone.SetBatteryCapacity(90);

    cout << "Smartphone:\n";
    cout << "Brand: " << myPhone.GetBrand() << "\n";
    cout << "Model: " << myPhone.GetModel() << "\n";
    cout << "Color: " << myPhone.GetColor() << "\n";
    cout << "Phone Number: " << myPhone.GetPhone() << "\n";
    cout << "Name: " << myPhone.GetName() << "\n";
    cout << "Price: $" << myPhone.GetPrice() << "\n";
    cout << "Screen Size: " << myPhone.GetScreenSize() << " inches\n";
    cout << "Memory: " << myPhone.GetPhoneMemory() << "GB\n";
    cout << "Battery: " << myPhone.GetBatteryCapacity() << "%\n\n";

    // Pen
    Pen myPen;
    myPen.SetColor("Blue");
    myPen.SetType("Gel");
    myPen.SetPrice(2.5);
    myPen.SetInkLevel(60);

    cout << "Pen:\n";
    cout << "Color: " << myPen.GetColor() << "\n";
    cout << "Type: " << myPen.GetType() << "\n";
    cout << "Price: $" << myPen.GetPrice() << "\n";
    cout << "Ink Level: " << myPen.GetInkLevel() << "%\n\n";

    // Headphones
    Headphones myHeadphones;
    myHeadphones.SetColor("White");
    myHeadphones.SetType("Bluetooth");
    myHeadphones.SetPrice(79.99);
    myHeadphones.SetBatteryCapacity(100);

    cout << "Headphones:\n";
    cout << "Color: " << myHeadphones.GetColor() << "\n";
    cout << "Type: " << myHeadphones.GetType() << "\n";
    cout << "Price: $" << myHeadphones.GetPrice() << "\n";
    cout << "Battery: " << myHeadphones.GetBatteryCapacity() << "%\n";
}
