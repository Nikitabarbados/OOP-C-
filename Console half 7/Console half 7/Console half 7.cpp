#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

// -------------------------------------------------------------------------

//class Follower {
//
//};
//
//int main() {
//	// Follower followers[50];
//	// int count = GetFollowersCountFromDB();
//	int count = 571;
//	Follower* followers = new Follower[count];
//	delete[] followers;
//}

// -------------------------------------------------------------------------

// написати корисний зрозумілий тип для робоити з динамічним масивом (поки що з елементами типу int)

//class Array {
//	int* data; // в
//};
//
//int main() {
//	Array a;
//	a.AddElement(10); // 10
//	a.AddElement(20); // 10 20
//	a.AddElement(30); // 10 20 30
//	a.AddElement(40); // 10 20 30 40
//	a.AddElement(50); // 10 20 30 40 50
//	a.RemoveByIndex(1); // 10 30 40 50
//	a.Print(); // 10
//
//}

// -------------------------------------------------------------------------

//написати корисний, зрозумілий тип для роботи з динамічним масивом (поки що з елементами типу інт)

//// псевдонім для типу 
//typedef unsigned long long int ULL;
//
//class Array {
//	int* data = nullptr; // покажчик на майбутній динамічний масив
//	ULL length = 0;
//
//public:
//	Array() {
//		cout << "Створено пустий масив\n";
//	}
//
//	Array(int ar[], unsigned int size) {
//		// якщо в класі є поле-покажчик, то іноді прямо в конструкторі треба буде ВИДІЛЯТИ ПАМ'ЯТЬ динамічно під цей покажчик
//		length = size;
//		data = new int[length];
//		for (int i = 0; i < length; i++) {
//			data[i] = ar[i];
//		}
//		cout << "Створено непустий масив на " << size << " елементів\n";
//	}
//
//	void Print() const {
//		if (length == 0) {
//			cout << "Масив пустий, нема чого показувати :(\n";
//		}
//		else {
//			cout << "Елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i];
//				cout << (i == length - 1 ? "." : ", ");
//			}
//			cout << "\n";
//		}
//	}
//
//	ULL GetLength() const {
//		return length;
//	}
//
//	// не для кожного приватного поля потрібно писати І ГЕТТЕР І СЕТТЕР
//	// треба дивитися по ситуації: наприклад, кількість елементів масиву може змінюватися ЛИШЕ ЧЕРЕЗ ПЕВНУ ПОВЕДІНКУ (додати елемент, видалити елемент)
//	//void SetLength(ULL length) {
//	//	this->length = length;
//	//}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//
//	Array a;
//	a.Print();
//
//	int ar[] = { 1,2,3,4,5 };
//	Array b(ar, 5);
//	// b.SetLength(15); // !!!
//	b.Print();
//
//	cout << b.GetLength() << "\n"; // 5
//	cout << a.GetLength() << "\n"; // 0
//
//
//	// a.AddElement(20); // 10 20
//	// a.AddElement(30); // 10 20 30
//	// a.RemoveByIndex(1); // 10 30
//	// a.AddElement(10); // 10
//	// a.RemoveByValue(30); // 10
//	// a.Print(); // 10
//
//}

// -------------------------------------------------------------------------

// написати корисний, зрозумілий тип для роботи з динамічним масивом (поки що з елементами типу інт)

//class Array {
//	int* data = nullptr; // покажчик на майбутній динамічний масив
//	unsigned int length = 0;
//
//public:
//	Array() {
//		cout << "Створено пустий масив\n";
//	}
//
//	Array(int ar[], unsigned int size) {
//		if (size > 1000000) throw "error!\n";
//
//		// якщо в класі є поле-покажчик, то іноді прямо в конструкторі треба буде ВИДІЛЯТИ ПАМ'ЯТЬ динамічно під цей покажчик
//		length = size;
//		data = new int[length];
//		for (int i = 0; i < length; i++) {
//			data[i] = ar[i];
//		}
//		cout << "Створено непустий масив на " << size << " елементів\n";
//	}
//
//	void Print() const {
//		if (length == 0) {
//			cout << "Масив пустий, нема чого показувати :(\n";
//		}
//		else {
//			cout << "Елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i];
//				cout << (i == length - 1 ? "." : ", ");
//			}
//			cout << "\n";
//		}
//	}
//
//	unsigned int GetLength() const {
//		return length;
//	}
//
//	void AddToBack(int value) {
//		// робимо новий масив, в якому буде на 1 елемент більше
//		int* temp = new int[length + 1];
//		// переганяємо елементи зі старого масиву в новий
//		for (int i = 0; i < length; i++)
//		{
//			temp[i] = data[i];
//		}
//		// в кінець нового масиву додаємо передане значення через параметр
//		temp[length] = value;
//		// старий масив треба почистити, інакше буде виток пам'яті
//		delete[] data;
//		// переставляємо основний покажчик зі старого масива (якого доречі уже і не існує), на новий масив
//		data = temp;
//		// так як відбулося додавання 1 елемента в кінець масиву, то його довжина стала +1 
//		length++;
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//
//	Array a;
//	a.Print();
//
//	int ar[] = { 1,2,3,4,5 };
//	Array b(ar, sizeof(ar) / sizeof(int));
//	b.Print();
//
//	for (int i = 0; i < 100; i++)
//	{
//		b.AddToBack(20); // 1 2 3 4 5 20
//		b.Print();
//		b.AddToBack(50); // 1 2 3 4 5 20 50
//		b.Print();
//	}
//
//
//	// a.AddElement(20); // 10 20
//	// a.AddElement(30); // 10 20 30
//	// a.RemoveByIndex(1); // 10 30
//	// a.AddElement(10); // 10
//	// a.RemoveByValue(30); // 10
//	// a.Print(); // 10
//
//}

// -------------------------------------------------------------------------
// написати корисний, зрозумілий тип для роботи з динамічним масивом (поки що з елементами типу інт)


//class Array {
//	int* data; // покажчик на майбутній динамічний масив
//	unsigned int length;
//
//public:
//	Array() {
//		data = nullptr;
//		length = 0;
//		cout << "Створено пустий масив\n";
//	}
//
//	Array(int ar[], unsigned int size) {
//		if (size > 1000000) throw "error!\n";
//
//		// якщо в класі є поле-покажчик, то іноді прямо в конструкторі треба буде ВИДІЛЯТИ ПАМ'ЯТЬ динамічно під цей покажчик
//		length = size;
//		data = new int[length];
//		for (int i = 0; i < length; i++) {
//			data[i] = ar[i];
//		}
//		cout << "Створено непустий масив на " << size << " елементів\n";
//	}
//
//	void Print() const {
//		if (length == 0) {
//			cout << "Масив пустий, нема чого показувати :(\n";
//		}
//		else {
//			cout << "Елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i];
//				cout << (i == length - 1 ? "." : ", ");
//			}
//			cout << "\n";
//		}
//	}
//
//	unsigned int GetLength() const {
//		return length;
//	}
//
//	void AddToBack(int value) {
//		// робимо новий масив, в якому буде на 1 елемент більше
//		int* temp = new int[length + 1];
//		// переганяємо елементи зі старого масиву в новий
//		for (int i = 0; i < length; i++)
//		{
//			temp[i] = data[i];
//		}
//		// в кінець нового масиву додаємо передане значення через параметр
//		temp[length] = value;
//		// старий масив треба почистити, інакше буде виток пам'яті
//		delete[] data;
//		// переставляємо основний покажчик зі старого масива (якого доречі уже і не існує), на новий масив
//		data = temp;
//		// так як відбулося додавання 1 елемента в кінець масиву, то його довжина стала +1 
//		length++;
//	}
//
//	void RemoveFromBack() {
//		if (length == 0) {
//			cout << "Нема чого видаляти, масив жеж пустий!\n";
//			return; // якщо нема чого видаляти, то просто нічого не робимо
//			// throw "Помилка! Елементів нема!";
//		}
//		length--;
//		int* temp = new int[length];
//		for (int i = 0; i < length; i++)
//			temp[i] = data[i];
//		delete[] data;
//		data = temp;
//	}
//
//	void AddToFront(int value) {
//		// робимо новий масив, в якому буде на 1 елемент більше
//		int* temp = new int[length + 1];
//		// переганяємо елементи зі старого масиву в новий
//		for (int i = 0; i < length; i++)
//		{
//			temp[i + 1] = data[i];
//		}
//		// на початок нового масиву додаємо передане значення через параметр
//		temp[0] = value;
//		// старий масив треба почистити, інакше буде виток пам'яті
//		delete[] data;
//		// переставляємо основний покажчик зі старого масива (якого доречі уже і не існує), на новий масив
//		data = temp;
//		// так як відбулося додавання 1 елемента в кінець масиву, то його довжина стала +1 
//		length++;
//	}
//
//	void RemoveFromFront() {
//		if (length == 0) {
//			cout << "Нема чого видаляти, масив жеж пустий!\n";
//			return; // якщо нема чого видаляти, то просто нічого не робимо
//			// throw "Помилка! Елементів нема!";
//		}
//		length--;
//		int* temp = new int[length];
//		for (int i = 1; i < length + 1; i++)
//			temp[i - 1] = data[i];
//		delete[] data;
//		data = temp;
//	}
//
//	void SortAZ() {
//		sort(data, data + length);
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//
//	Array a;
//	a.Print();
//
//	int ar[] = { 1,2,3,4,5 };
//	Array b(ar, sizeof(ar) / sizeof(int));
//	b.Print(); // 1 2 3 4 5
//	b.AddToBack(20);
//	b.Print(); // 1 2 3 4 5 20
//	b.AddToBack(30);
//	b.Print(); // 1 2 3 4 5 20 30
//	b.RemoveFromBack();
//	b.Print(); // 1 2 3 4 5 20
//	b.AddToFront(50);
//	b.Print(); // 50 1 2 3 4 5 20
//	b.AddToFront(70);
//	b.Print(); // 70 50 1 2 3 4 5 20
//	b.RemoveFromFront();
//	b.Print();
//	b.RemoveFromFront();
//	b.Print();
//	b.RemoveFromFront();
//	b.Print();
//
//	// a.AddElement(20); // 10 20
//	// a.AddElement(30); // 10 20 30
//	// a.RemoveByIndex(1); // 10 30
//	// a.AddElement(10); // 10
//	// a.RemoveByValue(30); // 10
//	// a.Print(); // 10
//
//}

// -------------------------------------------------------------------------

// написати корисний, зрозумілий тип для роботи з динамічним масивом (поки що з елементами типу інт)

//class Array {
//	int* data; // покажчик на майбутній динамічний масив
//	unsigned int length;
//
//public:
//	Array() {
//		data = nullptr;
//		length = 0;
//		cout << "Створено пустий масив\n";
//	}
//
//	Array(int ar[], unsigned int size) {
//		if (size > 1000000) throw "error!\n";
//
//		// якщо в класі є поле-покажчик, то іноді прямо в конструкторі треба буде ВИДІЛЯТИ ПАМ'ЯТЬ динамічно під цей покажчик
//		length = size;
//		data = new int[length];
//		for (int i = 0; i < length; i++) {
//			data[i] = ar[i];
//		}
//		cout << "Створено непустий масив на " << size << " елементів\n";
//	}
//
//	// конструктор - метод, в який ми потрапляємо пілся створення об'єкта (записуємо значення в поля, виділяємо пам'ять під поля-покажчики)
//	// деструктор - метод, який викликається АВТОМАТИЧНО безпсередньо перед тим, як об'єкт буде знищено.
//	// 1) там можна зробити роздруківку і переконатися що об'єкт перестане існувати
//	// 2) пам'ять виділена під поля-покажчики може бути вівільнена САМЕ ТАМ
//
//	void Print() const {
//		if (length == 0) {
//			cout << "Масив пустий, нема чого показувати :(\n";
//		}
//		else {
//			cout << "Елементи масиву: ";
//			for (int i = 0; i < length; i++)
//			{
//				cout << data[i];
//				cout << (i == length - 1 ? "." : ", ");
//			}
//			cout << "\n";
//		}
//	}
//
//	unsigned int GetLength() const {
//		return length;
//	}
//
//	void AddToBack(int value) {
//		// робимо новий масив, в якому буде на 1 елемент більше
//		int* temp = new int[length + 1];
//		// переганяємо елементи зі старого масиву в новий
//		for (int i = 0; i < length; i++)
//		{
//			temp[i] = data[i];
//		}
//		// в кінець нового масиву додаємо передане значення через параметр
//		temp[length] = value;
//		// старий масив треба почистити, інакше буде виток пам'яті
//		delete[] data;
//		// переставляємо основний покажчик зі старого масива (якого доречі уже і не існує), на новий масив
//		data = temp;
//		// так як відбулося додавання 1 елемента в кінець масиву, то його довжина стала +1 
//		length++;
//	}
//
//	void RemoveFromBack() {
//		if (length == 0) {
//			cout << "Нема чого видаляти, масив жеж пустий!\n";
//			return; // якщо нема чого видаляти, то просто нічого не робимо
//			// throw "Помилка! Елементів нема!";
//		}
//		length--;
//		int* temp = new int[length];
//		for (int i = 0; i < length; i++)
//			temp[i] = data[i];
//		delete[] data;
//		data = temp;
//	}
//
//	void AddToFront(int value) {
//		// робимо новий масив, в якому буде на 1 елемент більше
//		int* temp = new int[length + 1];
//		// переганяємо елементи зі старого масиву в новий
//		for (int i = 0; i < length; i++)
//		{
//			temp[i + 1] = data[i];
//		}
//		// на початок нового масиву додаємо передане значення через параметр
//		temp[0] = value;
//		// старий масив треба почистити, інакше буде виток пам'яті
//		delete[] data;
//		// переставляємо основний покажчик зі старого масива (якого доречі уже і не існує), на новий масив
//		data = temp;
//		// так як відбулося додавання 1 елемента в кінець масиву, то його довжина стала +1 
//		length++;
//	}
//
//	void RemoveFromFront() {
//		if (length == 0) {
//			cout << "Нема чого видаляти, масив жеж пустий!\n";
//			return; // якщо нема чого видаляти, то просто нічого не робимо
//			// throw "Помилка! Елементів нема!";
//		}
//		length--;
//		int* temp = new int[length];
//		for (int i = 1; i < length + 1; i++)
//			temp[i - 1] = data[i];
//		delete[] data;
//		data = temp;
//	}
//
//	void SortAZ() {
//		sort(data, data + length);
//	}
//
//	void Shuffle() {
//		for (int i = 0; i < 10000; i++)
//		{
//			int ri1 = rand() % length;
//			int ri2 = rand() % length;
//			swap(data[ri1], data[ri2]);
//		}
//	}
//
//	void Add10RandomNumbers() {
//		for (int i = 0; i < 10000; i++)
//			AddToBack(rand() % 100);
//	}
//
//	// приклад деструктора
//	// деструктор не можна перевантажити, він ніколи не приймає параметрів!
//	~Array() {
//		if (data != nullptr) {
//			delete[] data;
//		}
//		cout << "Об'єкт було знищено, а пам'ять - вивільнено!\n";
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//	srand(time(0));
//
//	while (true)
//	{
//		Array a;
//		a.Add10RandomNumbers();
//	} 
// 
//}

// -------------------------------------------------------------------------