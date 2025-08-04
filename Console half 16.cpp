#include <iostream>
#include <windows.h>
#include <algorithm>
#include <ctime>
using namespace std;

class Array {
	unsigned int capacity = 10;
	int* data = new int[capacity];
	unsigned int length = 0;

public:
	Array() {}

	void AddToBack(int value) {
		if (length >= capacity) {
			capacity *= 2;
			int* temp = new int[capacity];
			for (int i = 0; i < length; i++)
				temp[i] = data[i];
			delete[] data;
			data = temp;
		}
		data[length++] = value;
	}

	void AddToFront(int value) {
		if (length >= capacity) {
			capacity *= 2;
			int* temp = new int[capacity];
			for (int i = 0; i < length; i++)
				temp[i + 1] = data[i];
			delete[] data;
			data = temp;
		}
		else {
			for (int i = length - 1; i >= 0; i--)
				data[i + 1] = data[i];
		}
		data[0] = value;
		length++;
	}

	void RemoveFromBack() {
		if (length == 0) {
			cout << "Масив пустий, видаляти нічого!\n";
			return;
		}
		length--;
	}

	void RemoveFromFront() {
		if (length == 0) {
			cout << "Масив пустий, видаляти нічого!\n";
			return;
		}
		for (int i = 1; i < length; i++) {
			data[i - 1] = data[i];
		}
		length--;
	}

	void Insert(int value, int index) {
		if (index < 0 || index > length) {
			cout << "Некоректний індекс!\n";
			return;
		}
		if (length >= capacity) {
			capacity *= 2;
			int* temp = new int[capacity];
			for (int i = 0; i < index; i++)
				temp[i] = data[i];
			temp[index] = value;
			for (int i = index; i < length; i++)
				temp[i + 1] = data[i];
			delete[] data;
			data = temp;
		}
		else {
			for (int i = length - 1; i >= index; i--)
				data[i + 1] = data[i];
			data[index] = value;
		}
		length++;
	}

	void RemoveByIndex(int index) {
		if (index < 0 || index >= length) {
			cout << "Некоректний індекс!\n";
			return;
		}
		for (int i = index; i < length - 1; i++)
			data[i] = data[i + 1];
		length--;
	}

	void RemoveByValue(int value) {
		int newLength = 0;
		for (int i = 0; i < length; i++) {
			if (data[i] != value) {
				data[newLength++] = data[i];
			}
		}
		length = newLength;
	}

	void Sort() {
		sort(data, data + length);
	}

	void Reverse() {
		for (int i = 0; i < length / 2; i++)
			swap(data[i], data[length - i - 1]);
	}

	void Shuffle() {
		for (int i = 0; i < length; i++) {
			int j = rand() % length;
			swap(data[i], data[j]);
		}
	}

	void Print() const {
		cout << "Length = " << length << ", Capacity = " << capacity << "\n";
		if (length == 0) {
			cout << "Масив пустий!\n";
		}
		else {
			cout << "Елементи масиву: ";
			for (int i = 0; i < length; i++) {
				cout << data[i] << " ";
			}
			cout << "\n";
		}
	}

	~Array() {
		cout << "D-TOR\n";
		delete[] data;
	}

	Array(const Array& original) {
		cout << "COPY C-TOR\n";
		this->length = original.length;
		this->capacity = original.capacity;
		this->data = new int[capacity];
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
	a.AddToBack(10);
	a.Insert(99, 1);
	a.Print();

	a.RemoveFromFront();
	a.Print();

	a.RemoveFromBack();
	a.Print();

	a.RemoveByValue(10);
	a.Print();

	a.AddToBack(5);
	a.AddToBack(8);
	a.AddToBack(3);
	a.Sort();
	a.Print();

	a.Reverse();
	a.Print();

	a.Shuffle();
	a.Print();
}
