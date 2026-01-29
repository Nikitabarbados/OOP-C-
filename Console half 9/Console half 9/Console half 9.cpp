#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

// ------------------------------------------------------------------------

//class Array {
//	int* data = nullptr;
//	unsigned int length = 0;
//
//public:
//	Array() {
//		cout << "C-TOR WITHOUT PARAMETERS\n";
//	}
//	void AddToBack(int value) {
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i] = data[i];
//		temp[length] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void AddToFront(int value) {
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i + 1] = data[i];
//		temp[0] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void RemoveFromBack() {
//		if (length == 0) {
//			cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
//			return;
//		}
//		int* temp = new int[length - 1];
//		for (int i = 0; i < length - 1; i++)
//		{
//			temp[i] = data[i];
//		}
//		delete[] data;
//		data = temp;
//		length--;
//	}
//
//	// RemoveFromFront
//	// Insert
//	// RemoveByIndex(4);
//	// RemoveByValue(10);
//	// Sort();
//	// Reverse();
//	// Shuffle();
//
//	void Print() const {
//		if (length == 0) {
//			cout << "масив пустий!\n";
//		}
//		else {
//			cout << "елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i] << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	~Array() {
//		cout << "D-TOR\n";
//		if (data != nullptr) {
//			delete[] data;
//		}
//	}
//
//	Array(const Array& original) {
//		cout << "COPY C-TOR\n";
//		this->length = original.length;
//		this->data = new int[length];
//		for (int i = 0; i < length; i++)
//			this->data[i] = original.data[i];
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//	srand(time(0));
//
//	Array a;
//	a.AddToBack(10);
//	a.AddToBack(20);
//	a.Print();
//}

// ------------------------------------------------------------------------

//class Array {
//	static int add_count;
//	int* data = nullptr;
//	unsigned int length = 0;
//
//public:
//	Array() {}
//
//	void AddToBack(int value) {
//		add_count++;
//
//		cout << add_count << "ADD\n";
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i] = data[i];
//		temp[length] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void AddToFront(int value) {
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i + 1] = data[i];
//		temp[0] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void RemoveFromBack() {
//		if (length == 0) {
//			cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
//			return;
//		}
//		int* temp = new int[length - 1];
//		for (int i = 0; i < length - 1; i++)
//		{
//			temp[i] = data[i];
//		}
//		delete[] data;
//		data = temp;
//		length--;
//	}
//
//	// RemoveFromFront
//	// Insert
//	// RemoveByIndex(4);
//	// RemoveByValue(10);
//	// Sort();
//	// Reverse();
//	// Shuffle();
//
//	void Print() const {
//		if (length == 0) {
//			cout << "масив пустий!\n";
//		}
//		else {
//			cout << "елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i] << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	~Array() {
//		cout << "D-TOR\n";
//		if (data != nullptr) {
//			delete[] data;
//		}
//	}
//
//	Array(const Array& original) {
//		cout << "COPY C-TOR\n";
//		this->length = original.length;
//		this->data = new int[length];
//		for (int i = 0; i < length; i++)
//			this->data[i] = original.data[i];
//	}
//};
//
//int Array::add_count = 0;
//
//int main() {
//	SetConsoleOutputCP(1251);
//	srand(time(0));
//
//	Array a;
//	Array b;
//	Array c;
//	while (true) {
//		a.AddToBack(rand());
//		b.AddToBack(rand());
//		c.AddToBack(rand());
//	}
//	a.Print();
//}

// ------------------------------------------------------------------------

//class Array {
//
//	int add_count = 0;
//
//	int* data = nullptr;
//	unsigned int length = 0;
//
//public:
//	Array() {}
//
//	void AddToBack(int value) {
//		add_count++;
//
//		if (add_count % 1000 == 0)
//			cout << add_count << " ADD\n";
//
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i] = data[i];
//		temp[length] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void AddToFront(int value) {
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i + 1] = data[i];
//		temp[0] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void RemoveFromBack() {
//		if (length == 0) {
//			cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
//			return;
//		}
//		int* temp = new int[length - 1];
//		for (int i = 0; i < length - 1; i++)
//		{
//			temp[i] = data[i];
//		}
//		delete[] data;
//		data = temp;
//		length--;
//	}
//
//	// RemoveFromFront
//	// Insert
//	// RemoveByIndex(4);
//	// RemoveByValue(10);
//	// Sort();
//	// Reverse();
//	// Shuffle();
//
//	void Print() const {
//		if (length == 0) {
//			cout << "масив пустий!\n";
//		}
//		else {
//			cout << "елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i] << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	~Array() {
//		cout << "D-TOR\n";
//		if (data != nullptr) {
//			delete[] data;
//		}
//	}
//
//	Array(const Array& original) {
//		cout << "COPY C-TOR\n";
//		this->length = original.length;
//		this->data = new int[length];
//		for (int i = 0; i < length; i++)
//			this->data[i] = original.data[i];
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//	srand(time(0));
//
//	Array a;
//
//	while (true) {
//		a.AddToBack(rand());
//	}
//	a.Print();
//}

// ------------------------------------------------------------------------

//class Array {
//	unsigned int capacity = 10; // при створенні масиву, він одразу для себе робить запас пам'яті на 10 елементів
//	int* data = new int[capacity];
//	unsigned int length = 0; // фактична (реальна) кількість елементів, присутніх у масиві
//
//public:
//	Array() {}
//
//	void AddToBack(int value) {
//		if (length < capacity) // якщо виділенної зарання пам'яті ВИСТАЧАЄ для додавання чергового елемента
//			data[length] = value;
//		else { // АЛЕ ЯКЩО МІСЦЯ ВЖЕ НЕ ВИСТАЧАЄ, ТО
//			// треба перевиділити пам'ять
//			capacity *= 2; // збільшуємо запас пам'яті у 2 рази (можна і в 1.5, можна і в 1.2)
//			// якщо був запас 10 елементів, то стане 20
//			// якщо запас був 20 елементів, то стане 40, і тд
//			int* temp = new int[capacity]; // новий масив буде в 2 рази більше по пам'яті
//			// але в старому масиві все ще усього 10 елементів, тому цикл треба написати так, щоб зачепити лише старі елементі зі старого масиву
//			for (int i = 0; i < length; i++) {
//				temp[i] = data[i];
//			}
//			// в новий масив в кінець (по індексу 10) пишеться ОДИНАДЦЯТИЙ елемент
//			temp[length] = value;
//			delete[] data; // в цілях запобігання витокам пам'яті, чистимо пам'ять від старого масиву
//			data = temp; // переставляємо покажчик на новий масив
//		}
//		length++;
//	}
//
//	void AddToFront(int value) {
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i + 1] = data[i];
//		temp[0] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void RemoveFromBack() {
//		if (length == 0) {
//			cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
//			return;
//		}
//		int* temp = new int[length - 1];
//		for (int i = 0; i < length - 1; i++)
//		{
//			temp[i] = data[i];
//		}
//		delete[] data;
//		data = temp;
//		length--;
//	}
//
//	// RemoveFromFront
//	// Insert
//	// RemoveByIndex(4);
//	// RemoveByValue(10);
//	// Sort();
//	// Reverse();
//	// Shuffle();
//
//	void Print() const {
//		if (length == 0) {
//			cout << "масив пустий!\n";
//		}
//		else {
//			cout << "елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i] << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	~Array() {
//		cout << "D-TOR\n";
//		if (data != nullptr) {
//			delete[] data;
//		}
//	}
//
//	Array(const Array& original) {
//		cout << "COPY C-TOR\n";
//		this->length = original.length;
//		this->data = new int[length];
//		for (int i = 0; i < length; i++)
//			this->data[i] = original.data[i];
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//	srand(time(0));
//
//	Array a;
//
//	int k = 0; // кількість додавань
//	for (;;) {
//		k++;
//		if (k % 1000 == 0)
//			cout << k << " AddToBack count\n";
//		a.AddToBack(rand());
//	}
//	a.Print();
//}

// ------------------------------------------------------------------------

//class Array {
//
//	int add_count = 0;
//
//	unsigned int capacity = 10; // при створенні масиву, він одразу для себе робить запас пам'яті на 10 елементів
//	int* data = new int[capacity];
//	unsigned int length = 0; // фактична (реальна) кількість елементів, присутніх у масиві
//
//public:
//	Array() {}
//
//	void AddToBack(int value) {
//		add_count++;
//		if (add_count % 1000 == 0) cout << add_count << " ADD COUNT\n";
//
//		if (length < capacity) // якщо виділенної зарання пам'яті ВИСТАЧАЄ для додавання чергового елемента
//			data[length] = value;
//		else { // АЛЕ ЯКЩО МІСЦЯ ВЖЕ НЕ ВИСТАЧАЄ, ТО
//			// треба перевиділити пам'ять
//			capacity *= 2; // збільшуємо запас пам'яті у 2 рази (можна і в 1.5, можна і в 1.2)
//			// якщо був запас 10 елементів, то стане 20
//			// якщо запас був 20 елементів, то стане 40, і тд
//			int* temp = new int[capacity]; // новий масив буде в 2 рази більше по пам'яті
//			// але в старому масиві все ще усього 10 елементів, тому цикл треба написати так, щоб зачепити лише старі елементі зі старого масиву
//			for (int i = 0; i < length; i++) {
//				temp[i] = data[i];
//			}
//			// в новий масив в кінець (по індексу 10) пишеться ОДИНАДЦЯТИЙ елемент
//			temp[length] = value;
//			delete[] data; // в цілях запобігання витокам пам'яті, чистимо пам'ять від старого масиву
//			data = temp; // переставляємо покажчик на новий масив
//		}
//		length++;
//	}
//
//	void AddToFront(int value) {
//		int* temp = new int[length + 1];
//		for (int i = 0; i < length; i++) temp[i + 1] = data[i];
//		temp[0] = value;
//		delete[] data;
//		data = temp;
//		length++;
//	}
//
//	void RemoveFromBack() {
//		if (length == 0) {
//			cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
//			return;
//		}
//		int* temp = new int[length - 1];
//		for (int i = 0; i < length - 1; i++)
//		{
//			temp[i] = data[i];
//		}
//		delete[] data;
//		data = temp;
//		length--;
//	}
//
//	// RemoveFromFront
//	// Insert
//	// RemoveByIndex(4);
//	// RemoveByValue(10);
//	// Sort();
//	// Reverse();
//	// Shuffle();
//
//	void Print() const {
//		if (length == 0) {
//			cout << "масив пустий!\n";
//		}
//		else {
//			cout << "елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i] << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	~Array() {
//		cout << "D-TOR\n";
//		if (data != nullptr) {
//			delete[] data;
//		}
//	}
//
//	Array(const Array& original) {
//		cout << "COPY C-TOR\n";
//		this->length = original.length;
//		this->data = new int[length];
//		for (int i = 0; i < length; i++)
//			this->data[i] = original.data[i];
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//	srand(time(0));
//
//	Array a;
//
//	for (;;) {
//		a.AddToBack(rand());
//	}
//	a.Print();
//}

// ------------------------------------------------------------------------

