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
    int* serviceYears;

public:
    Car() : Car("Unknown", 4, "Unknown", "Unknown", 0.0, 0.0, 100, nullptr) {}

    Car(string color, int wheels, string model, string brand, double price, double engine_capacity, int fuel_level, int* serviceYears)
        : color(color), wheels(wheels), model(model), brand(brand),
        price(price), engine_capacity(engine_capacity), fuel_level(fuel_level),
        serviceYears(serviceYears) {
    }

    void SetColor(string color) { this->color = color; }
    void SetWheels(int wheels) {
        if (wheels < 0)
            cout << "Incorrect value for wheels.\n";
        else
            this->wheels = wheels;
    }
    void SetModel(string model) { this->model = model; }
    void SetBrand(string brand) { this->brand = brand; }
    void SetPrice(double price) {
        if (price < 0)
            cout << "Incorrect value for price.\n";
        else
            this->price = price;
    }
    void SetEngineCapacity(double engine_capacity) {
        if (engine_capacity < 0)
            cout << "Incorrect value for engine capacity.\n";
        else
            this->engine_capacity = engine_capacity;
    }
    void SetFuelLevel(int fuel_level) {
        if (fuel_level < 0 || fuel_level > 100)
            cout << "Fuel level must be 0-100.\n";
        else
            this->fuel_level = fuel_level;
    }
    void SetServiceYears(int* serviceYears) { this->serviceYears = serviceYears; }
    int* GetServiceYears() { return serviceYears; }

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
        cout << "Fuel level: " << fuel_level << "%\n";
    }

    void Refuel() {
        cout << "Refueling...\n";
        fuel_level = 100;
    }

    void ShowInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Color: " << color
            << ", Price: $" << price << ", Engine: " << engine_capacity
            << "L, Fuel: " << fuel_level << "%\n";
    }
};

class Book {
private:
    string title;
    string author;
    int pages;
    double price;
    int* ratings;

public:
    Book() : Book("Unknown", "Unknown", 0, 0.0, nullptr) {}

    Book(string title, string author, int pages, double price, int* ratings)
        : title(title), author(author), pages(pages), price(price), ratings(ratings) {
    }

    void SetTitle(string title) { this->title = title; }
    void SetAuthor(string author) { this->author = author; }
    void SetPages(int pages) {
        if (pages < 0)
            cout << "Pages can't be negative.\n";
        else
            this->pages = pages;
    }
    void SetPrice(double price) {
        if (price < 0)
            cout << "Price can't be negative.\n";
        else
            this->price = price;
    }
    void SetRatings(int* ratings) { this->ratings = ratings; }
    int* GetRatings() { return ratings; }

    string GetTitle() { return title; }
    string GetAuthor() { return author; }
    int GetPages() { return pages; }
    double GetPrice() { return price; }

    void Read() {
        cout << "Reading " << title << "...\n";
    }

    void ShowInfo() {
        cout << "Book: " << title << " by " << author
            << ", Pages: " << pages << ", Price: $" << price << "\n";
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
    string* installedApps;

public:
    Smartphone() : Smartphone("Unknown", 1, "Unnamed", "Unknown", 0.0, 0.0, 0.0, 100, nullptr) {}

    Smartphone(string color, int phone, string name, string model, double price,
        double screen_size, double phone_memory, int battery_capacity, string* installedApps)
        : color(color), phone(phone), name(name), model(model),
        price(price), screen_size(screen_size), phone_memory(phone_memory),
        battery_capacity(battery_capacity), installedApps(installedApps) {
    }

    void SetColor(string color) { this->color = color; }
    void SetPhone(int phone) { this->phone = phone; }
    void SetName(string name) { this->name = name; }
    void SetModel(string model) { this->model = model; }
    void SetPrice(double price) {
        if (price < 0)
            cout << "Invalid price.\n";
        else
            this->price = price;
    }
    void SetScreenSize(double screen_size) {
        if (screen_size < 0)
            cout << "Invalid screen size.\n";
        else
            this->screen_size = screen_size;
    }
    void SetPhoneMemory(double phone_memory) {
        if (phone_memory < 0)
            cout << "Invalid memory size.\n";
        else
            this->phone_memory = phone_memory;
    }
    void SetBatteryCapacity(int battery_capacity) {
        if (battery_capacity < 0 || battery_capacity > 100)
            cout << "Battery should be 0-100%.\n";
        else
            this->battery_capacity = battery_capacity;
    }
    void SetInstalledApps(string* installedApps) { this->installedApps = installedApps; }
    string* GetInstalledApps() { return installedApps; }

    void Call() {
        cout << name << " is calling...\n";
        battery_capacity = max(0, battery_capacity - 5);
    }

    void ShowInfo() {
        cout << "Smartphone " << name << " (" << model << "), Price: $" << price << ", Battery: " << battery_capacity << "%\n";
    }
};

class Pen {
private:
    string color;
    string type;
    double price;
    int ink_level;
    string* materials;

public:
    Pen() : Pen("Black", "Ballpoint", 1.0, 100, nullptr) {}

    Pen(string color, string type, double price, int ink_level, string* materials)
        : color(color), type(type), price(price), ink_level(ink_level), materials(materials) {
    }

    void SetColor(string color) { this->color = color; }
    void SetType(string type) { this->type = type; }
    void SetPrice(double price) {
        if (price < 0)
            cout << "Invalid price.\n";
        else
            this->price = price;
    }
    void SetInkLevel(int ink_level) {
        if (ink_level < 0 || ink_level > 100)
            cout << "Ink level must be 0-100.\n";
        else
            this->ink_level = ink_level;
    }
    void SetMaterials(string* materials) { this->materials = materials; }
    string* GetMaterials() { return materials; }

    void Write() {
        if (ink_level > 0) {
            cout << "Writing with pen...\n";
            ink_level = max(0, ink_level - 10);
        }
        else {
            cout << "Ink empty.\n";
        }
    }

    void ShowInfo() {
        cout << "Pen: " << type << ", Color: " << color << ", Price: $" << price << ", Ink: " << ink_level << "%\n";
    }
};

class Headphones {
private:
    string color;
    string type;
    double price;
    int battery_capacity;
    string* compatibleDevices;

public:
    Headphones() : Headphones("Black", "Over-Ear", 99.99, 100, nullptr) {}

    Headphones(string color, string type, double price, int battery_capacity, string* compatibleDevices)
        : color(color), type(type), price(price), battery_capacity(battery_capacity), compatibleDevices(compatibleDevices) {
    }

    void SetColor(string color) { this->color = color; }
    void SetType(string type) { this->type = type; }
    void SetPrice(double price) {
        if (price < 0)
            cout << "Invalid price.\n";
        else
            this->price = price;
    }
    void SetBatteryCapacity(int battery_capacity) {
        if (battery_capacity < 0 || battery_capacity > 100)
            cout << "Battery must be 0-100.\n";
        else
            this->battery_capacity = battery_capacity;
    }
    void SetCompatibleDevices(string* compatibleDevices) { this->compatibleDevices = compatibleDevices; }
    string* GetCompatibleDevices() { return compatibleDevices; }

    void PlayMusic() {
        if (battery_capacity > 0) {
            cout << "Playing music...\n";
            battery_capacity = max(0, battery_capacity - 10);
        }
        else {
            cout << "Battery empty.\n";
        }
    }

    void ShowInfo() {
        cout << "Headphones: " << type << ", Color: " << color << ", Battery: " << battery_capacity << "%\n";
    }
};

int main() {
    Car car;
    Book book;
    Smartphone phone;
    Pen pen;
    Headphones hp;

    car.ShowInfo();
    book.ShowInfo();
    phone.ShowInfo();
    pen.ShowInfo();
    hp.ShowInfo();

    return 0;
}
x