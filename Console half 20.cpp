#include <iostream>
#include <string>
#include <sstream> // для stringstream
using namespace std;

class Array {
    int* data;
    int size;
public:
    // конструктор за замовчуванням
    Array(int s = 0) {
        size = s;
        if (size > 0) data = new int[size];
        else data = nullptr;
    }

    // конструктор перетворення зі string "1 2 3 4"
    Array(string str) {
        stringstream ss(str);
        int temp;
        size = 0;
        // спочатку рахуємо кількість чисел
        while (ss >> temp) size++;
        ss.clear();

        data = new int[size];
        for (int i = 0; i < size; i++) {
            ss >> data[i];
        }
    }

    // конструктор копіювання
    Array(const Array& other) {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++) data[i] = other.data[i];
    }

    // оператор присвоювання
    Array& operator=(const Array& other) {
        if (this == &other) return *this; // перевірка на самоприсвоєння
        delete[] data; // зносим старое
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++) data[i] = other.data[i];
        return *this;
    }

    ~Array() {
        delete[] data;
    }

    int GetSize() const { return size; }

    // доступ по індексу
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Index out of range! Вертаю нуль \n";
            static int dummy = 0;
            return dummy;
        }
        return data[index];
    }

    // оператор == та !=
    bool operator==(const Array& other) {
        if (size != other.size) return false;
        for (int i = 0; i < size; i++) {
            if (data[i] != other.data[i]) return false;
        }
        return true;
    }

    bool operator!=(const Array& other) {
        return !(*this == other);
    }

    // перетворення в string
    operator string() const {
        stringstream ss;
        for (int i = 0; i < size; i++) {
            ss << data[i] << " ";
        }
        return ss.str();
    }

    // друк
    friend ostream& operator<<(ostream& os, const Array& arr) {
        for (int i = 0; i < arr.size; i++) {
            os << arr.data[i] << " ";
        }
        return os;
    }

    // зчитування
    friend istream& operator>>(istream& is, Array& arr) {
        for (int i = 0; i < arr.size; i++) {
            is >> arr.data[i];
        }
        return is;
    }
};

// main
int main() {
    Array a(3);
    cout << "Введи 3 числа для масиву a: ";
    cin >> a;

    cout << "Масив a: " << a << "\n";

    Array b = a; // копіювання
    cout << "Масив b (копія): " << b << "\n";

    cout << "a[1] = " << a[1] << "\n";
    a[1] = 99;
    cout << "a після зміни: " << a << "\n";

    cout << "a == b ? " << (a == b ? "так" : "ні") << "\n";

    Array c("5 6 7 8"); // створення зі string
    cout << "Масив c: " << c << "\n";

    string s = (string)c; // перетворення у string
    cout << "c як string: " << s << "\n";
}
