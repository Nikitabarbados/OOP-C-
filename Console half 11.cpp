#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

class Array {
private:
    int* data = nullptr;
    unsigned int length = 0;

public:
    Array() {
        cout << "C-TOR WITHOUT PARAMETERS\n";
    }

    void AddToBack(int value) {
        int* temp = new int[length + 1];
        for (int i = 0; i < length; i++) temp[i] = data[i];
        temp[length] = value;
        delete[] data;
        data = temp;
        length++;
    }

    void AddToFront(int value) {
        int* temp = new int[length + 1];
        for (int i = 0; i < length; i++) temp[i + 1] = data[i];
        temp[0] = value;
        delete[] data;
        data = temp;
        length++;
    }

    void RemoveFromBack() {
        if (length == 0) {
            cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
            return;
        }
        int* temp = new int[length - 1];
        for (int i = 0; i < length - 1; i++) temp[i] = data[i];
        delete[] data;
        data = temp;
        length--;
    }

    void RemoveFromFront() {
        if (length == 0) {
            cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
            return;
        }
        int* temp = new int[length - 1];
        for (int i = 0; i < length - 1; i++) temp[i] = data[i + 1];
        delete[] data;
        data = temp;
        length--;
    }

    void Insert(int value, unsigned int index) {
        if (index > length) {
            cout << "Неправильний індекс для вставки!\n";
            return;
        }
        int* temp = new int[length + 1];
        for (int i = 0; i < index; i++) temp[i] = data[i];
        temp[index] = value;
        for (int i = index; i < length; i++) temp[i + 1] = data[i];
        delete[] data;
        data = temp;
        length++;
    }

    void RemoveByIndex(unsigned int index) {
        if (index >= length || length == 0) {
            cout << "Неправильний індекс або масив пустий!\n";
            return;
        }
        int* temp = new int[length - 1];
        for (int i = 0; i < index; i++) temp[i] = data[i];
        for (int i = index + 1; i < length; i++) temp[i - 1] = data[i];
        delete[] data;
        data = temp;
        length--;
    }

    void RemoveByValue(int value) {
        if (length == 0) {
            cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
            return;
        }
        int index = -1;
        for (int i = 0; i < length; i++) {
            if (data[i] == value) {
                index = i;
                break;
            }
        }
        if (index != -1) RemoveByIndex(index);
        else cout << "Значення " << value << " не знайдено!\n";
    }

    bool IsEmpty() {
        return length == 0;
    }

    unsigned int IndexOf(int value) {
        for (int i = 0; i < length; i++) {
            if (data[i] == value) return i;
        }
        return -1;
    }

    int LastIndexOf(int value) {
        for (int i = length - 1; i >= 0; i--) {
            if (data[i] == value) return i;
        }
        return -1;
    }

    void Reverse() {
        if (length <= 1) return;
        for (int i = 0; i < length / 2; i++) {
            int temp = data[i];
            data[i] = data[length - 1 - i];
            data[length - 1 - i] = temp;
        }
    }

    void Shuffle() {
        if (length <= 1) return;
        for (int i = length - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    void Print() const {
        if (length == 0) {
            cout << "масив пустий!\n";
        }
        else {
            cout << "елементи масиву: ";
            for (int i = 0; i < length; i++) {
                cout << data[i] << " ";
            }
            cout << "\n";
        }
    }

    ~Array() {
        cout << "D-TOR\n";
        if (data != nullptr) {
            delete[] data;
        }
    }

    Array(const Array& original) {
        cout << "COPY C-TOR\n";
        this->length = original.length;
        this->data = new int[length];
        for (int i = 0; i < length; i++)
            this->data[i] = original.data[i];
    }
};

int main() {
    SetConsoleOutputCP(1251);
    srand(time(0));

    Array a;
    a.AddToBack(10);
    a.AddToBack(20);
    a.Print();

    // Testing additional methods
    a.AddToFront(5);
    a.Print();
    a.Insert(15, 1);
    a.Print();
    a.RemoveFromBack();
    a.Print();
    a.RemoveFromFront();
    a.Print();
    a.RemoveByIndex(1);
    a.Print();
    a.RemoveByValue(10);
    a.Print();
    cout << "Is empty: " << (a.IsEmpty() ? "true" : "false") << "\n";
    cout << "Index of 20: " << a.IndexOf(20) << "\n";
    cout << "Last Index of 20: " << a.LastIndexOf(20) << "\n";
    a.Reverse();
    a.Print();
    a.Shuffle();
    a.Print();

    return 0;
}