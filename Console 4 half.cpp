#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string color;
    int wheels;
    string model;
    string brand;
    double price;
    double engine_capacity;
    int fuel_level;

public:
    // конструктор
    Car() : wheels(4), fuel_level(100) {}

    // Setters
    void SetColor(string new_color) {
        color = new_color;
    }
    void SetWheels(int new_wheels) {
        if (new_wheels < 0) {
            cout << "Incorrect value for wheels. Please, enter a non-negative value.\n";
        }
        else {
            wheels = new_wheels;
        }
    }
    void SetModel(string new_model) {
        model = new_model;
    }
    void SetBrand(string new_brand) {
        brand = new_brand;
    }
    void SetPrice(double new_price) {
        if (new_price < 0) {
            cout << "Incorrect value for price. Please, enter a non-negative value.\n";
        }
        else {
            price = new_price;
        }
    }
    void SetEngineCapacity(double new_capacity) {
        if (new_capacity < 0) {
            cout << "Incorrect value for engine capacity. Please, enter a non-negative value.\n";
        }
        else {
            engine_capacity = new_capacity;
        }
    }
    void SetFuelLevel(int new_fuel_level) {
        if (new_fuel_level < 0 || new_fuel_level > 100) {
            cout << "Incorrect value for fuel level. Please, enter value from 0 to 100.\n";
        }
        else {
            fuel_level = new_fuel_level;
        }
    }

    // Getters
    string GetColor() { return color; }
    int GetWheels() { return wheels; }
    string GetModel() { return model; }
    string GetBrand() { return brand; }
    double GetPrice() { return price; }
    double GetEngineCapacity() { return engine_capacity; }
    int GetFuelLevel() { return fuel_level; }

    void Drive() {
        cout << brand << " " << model << " is driving...\n";
        fuel_level = max(0, fuel_level - 10);
        cout << "Fuel level: " << fuel_level << "%\n\n";
    }
    void Refuel() {
        cout << brand << " " << model << " is refueling...\n";
        fuel_level = 100;
        cout << "Fuel level: " << fuel_level << "%\n\n";
    }
    void ShowInfo() {
        cout << "Car Brand: " << brand << "\n";
        cout << "Model: " << model << "\n";
        cout << "Color: " << color << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Engine Capacity: " << engine_capacity << " L\n";
        cout << "Fuel Level: " << fuel_level << "%\n\n";
    }
};

class Book {
private:
    string title;
    string author;
    int pages;
    double price;

public:
    // сеттери
    void SetTitle(string new_title) {
        title = new_title;
    }
    void SetAuthor(string new_author) {
        author = new_author;
    }
    void SetPages(int new_pages) {
        if (new_pages < 0) {
            cout << "Incorrect value for pages. Please, enter a non-negative value.\n";
        }
        else {
            pages = new_pages;
        }
    }
    void SetPrice(double new_price) {
        if (new_price < 0) {
            cout << "Incorrect value for price. Please, enter a non-negative value.\n";
        }
        else {
            price = new_price;
        }
    }

    // Getters
    string GetTitle() { return title; }
    string GetAuthor() { return author; }
    int GetPages() { return pages; }
    double GetPrice() { return price; }

    void Read() {
        cout << "Reading " << title << " by " << author << "...\n";
    }
    void ShowInfo() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Pages: " << pages << "\n";
        cout << "Price: $" << price << "\n\n";
    }
};

class Smartphone {
private:
    string color;
    int phone;
    string name;
    string model;
    double price;
    double screen_size;
    double phone_memory;
    int battery_capacity;

public:
    // конструктор
    Smartphone() : phone(1), battery_capacity(100) {}

    // Setters
    void SetColor(string new_color) {
        color = new_color;
    }
    void SetPhone(int new_phone) {
        phone = new_phone;
    }
    void SetName(string new_name) {
        name = new_name;
    }
    void SetModel(string new_model) {
        model = new_model;
    }
    void SetPrice(double new_price) {
        if (new_price < 0) {
            cout << "Incorrect value for price. Please, enter a non-negative value.\n";
        }
        else {
            price = new_price;
        }
    }
    void SetScreenSize(double new_screen_size) {
        if (new_screen_size < 0) {
            cout << "Incorrect value for screen size. Please, enter a non-negative value.\n";
        }
        else {
            screen_size = new_screen_size;
        }
    }
    void SetPhoneMemory(double new_memory) {
        if (new_memory < 0) {
            cout << "Incorrect value for phone memory. Please, enter a non-negative value.\n";
        }
        else {
            phone_memory = new_memory;
        }
    }
    void SetBatteryCapacity(int new_capacity) {
        if (new_capacity < 0 || new_capacity > 100) {
            cout << "Incorrect value for battery capacity. Please, enter value from 0 to 100.\n";
        }
        else {
            battery_capacity = new_capacity;
        }
    }

    // геттери
    string GetColor() { return color; }
    int GetPhone() { return phone; }
    string GetName() { return name; }
    string GetModel() { return model; }
    double GetPrice() { return price; }
    double GetScreenSize() { return screen_size; }
    double GetPhoneMemory() { return phone_memory; }
    int GetBatteryCapacity() { return battery_capacity; }

    void Call() {
        cout << name << " is calling...\n";
        battery_capacity = max(0, battery_capacity - 5);
        cout << "Battery capacity: " << battery_capacity << "%\n\n";
    }
    void SendMessage() {
        cout << name << " is sending a message...\n";
        battery_capacity = max(0, battery_capacity - 2);
        cout << "Battery capacity: " << battery_capacity << "%\n\n";
    }
    void Charge() {
        cout << name << " is charging...\n";
        battery_capacity = 100;
        cout << "Battery capacity: " << battery_capacity << "%\n\n";
    }
    void ShowInfo() {
        cout << "Phone Name: " << name << "\n";
        cout << "Model: " << model << "\n";
        cout << "Color: " << color << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Screen Size: " << screen_size << " inches\n";
        cout << "Memory: " << phone_memory << " GB\n";
        cout << "Battery Capacity: " << battery_capacity << "%\n\n";
    }
    void Play() {
        cout << name << " is playing a game...\n";
        battery_capacity = max(0, battery_capacity - 20);
        cout << "Battery capacity: " << battery_capacity << "%\n\n";
    }
};

class Pen {
private:
    string color;
    string type;
    double price;
    int ink_level;

public:
	// конструктор
    Pen() : ink_level(100) {}

    // сеттери
    void SetColor(string new_color) {
        color = new_color;
    }
    void SetType(string new_type) {
        type = new_type;
    }
    void SetPrice(double new_price) {
        if (new_price < 0) {
            cout << "Incorrect value for price. Please, enter a non-negative value.\n";
        }
        else {
            price = new_price;
        }
    }
    void SetInkLevel(int new_ink_level) {
        if (new_ink_level < 0 || new_ink_level > 100) {
            cout << "Incorrect value for ink level. Please, enter value from 0 to 100.\n";
        }
        else {
            ink_level = new_ink_level;
        }
    }

    // геттери
    string GetColor() { return color; }
    string GetType() { return type; }
    double GetPrice() { return price; }
    int GetInkLevel() { return ink_level; }

    void Write() {
        if (ink_level > 0) {
            cout << "Writing with " << type << " pen...\n";
            ink_level = max(0, ink_level - 10);
            cout << "Ink level: " << ink_level << "%\n\n";
        }
        else {
            cout << "Ink is empty! Please refill.\n\n";
        }
    }
    void Refill() {
        cout << "Refilling " << type << " pen...\n";
        ink_level = 100;
        cout << "Ink level: " << ink_level << "%\n\n";
    }
    void ShowInfo() {
        cout << "Pen Type: " << type << "\n";
        cout << "Color: " << color << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Ink Level: " << ink_level << "%\n\n";
    }
};

class Headphones {
private:
    string color;
    string type;
    double price;
    int battery_capacity;

public:
    // конструктор
    Headphones() : battery_capacity(100) {}

    // сеттер
    void SetColor(string new_color) {
        color = new_color;
    }
    void SetType(string new_type) {
        type = new_type;
    }
    void SetPrice(double new_price) {
        if (new_price < 0) {
            cout << "Incorrect value for price. Please, enter a non-negative value.\n";
        }
        else {
            price = new_price;
        }
    }
    void SetBatteryCapacity(int new_capacity) {
        if (new_capacity < 0 || new_capacity > 100) {
            cout << "Incorrect value for battery capacity. Please, enter value from 0 to 100.\n";
        }
        else {
            battery_capacity = new_capacity;
        }
    }

    // геттер
    string GetColor() { return color; }
    string GetType() { return type; }
    double GetPrice() { return price; }
    int GetBatteryCapacity() { return battery_capacity; }

    void PlayMusic() {
        if (battery_capacity > 0) {
            cout << "Playing music with " << type << " headphones...\n";
            battery_capacity = max(0, battery_capacity - 10);
            cout << "Battery capacity: " << battery_capacity << "%\n\n";
        }
        else {
            cout << "Battery is empty! Please charge.\n\n";
        }
    }
    void Charge() {
        cout << "Charging " << type << " headphones...\n";
        battery_capacity = 100;
        cout << "Battery capacity: " << battery_capacity << "%\n\n";
    }
    void ShowInfo() {
        cout << "Headphones Type: " << type << "\n";
        cout << "Color: " << color << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Battery Capacity: " << battery_capacity << "%\n\n";
    }
};

int main() {
    Book harryPotter;
    Car tesla;
    Smartphone iPhone;
    Pen bluePen;
    Headphones sonyHeadphones;

    tesla.SetFuelLevel(95);
    tesla.SetBrand("Tesla");
    tesla.SetModel("Model S");
    tesla.SetColor("Red");
    tesla.SetPrice(79999.99);
    tesla.SetEngineCapacity(0);
    tesla.Drive();
    tesla.ShowInfo();
    tesla.Drive();
    tesla.Refuel();

    cout << "-----------------------------------------------------------\n";

    harryPotter.SetTitle("Harry Potter and the Philosopher's Stone");
    harryPotter.SetAuthor("J.K. Rowling");
    harryPotter.SetPages(223);
    harryPotter.SetPrice(19.99);
    harryPotter.Read();
    harryPotter.ShowInfo();

    cout << "-----------------------------------------------------------\n";

    iPhone.SetBatteryCapacity(98);
    iPhone.SetName("iPhone 11 Pro Max");
    iPhone.SetColor("Midnight Green");
    iPhone.SetModel("A2161");
    iPhone.SetPrice(1099.99);
    iPhone.SetScreenSize(6.5);
    iPhone.SetPhoneMemory(256);
    iPhone.Call();
    iPhone.SendMessage();
    iPhone.Charge();
    iPhone.Play();
    iPhone.ShowInfo();

    cout << "-----------------------------------------------------------\n";

    bluePen.SetColor("Blue");
    bluePen.SetType("Ballpoint");
    bluePen.SetPrice(1.99);
    bluePen.Write();
    bluePen.ShowInfo();
    bluePen.Write();
    bluePen.Refill();

    cout << "-----------------------------------------------------------\n";

    sonyHeadphones.SetColor("Black");
    sonyHeadphones.SetType("Over-Ear");
    sonyHeadphones.SetPrice(199.99);
    sonyHeadphones.PlayMusic();
    sonyHeadphones.ShowInfo();
    sonyHeadphones.PlayMusic();
    sonyHeadphones.Charge();

    cout << "-----------------------------------------------------------\n";
}