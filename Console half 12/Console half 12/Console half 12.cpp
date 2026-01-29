#include <iostream>
using namespace std;


//class Stack {
//	static const unsigned int SIZE = 10; // кількість елементів у стеці (за бажанням можна змінити)
//
//	int data[SIZE] = {}; // приклад реалізації стека на статичному масиві
//	unsigned int index = 0; // індекс, за яким буде додаватися черговий новий елемент
//	// також індекс можна сприймати як кількість елементів, які були додані в стек на даний момент
//
//public:
//	void Clear() {
//		index = 0;
//	}
//
//	bool IsEmpty() const {
//		return index == 0;
//	}
//
//	bool IsFull() const {
//		return index == SIZE;
//	}
//
//	unsigned int GetCount() const {
//		return index;
//	}
//
//	void Push(int value) {
//		if (!IsFull())
//			data[index++] = value;
//		else
//			throw "Переповнення стека!";
//	}
//
//	void Pop() {
//		if (!IsEmpty())
//			index--;
//		else throw "Стек порожній!";
//	}
//
//	int Peek() {
//		if (!IsEmpty())
//			return data[index - 1];
//		else throw "Стек порожній!";
//	}
//};
//
//int main() {
//	Stack st; // створюємо "порожній" стек
//	st.Push(10); // додаємо елемент в стек 10
//	st.Push(20);
//	st.Push(30);
//	cout << st.Peek() << "\n"; // подивитися, ЯКИЙ ЕЛЕМЕНТ знаходиться ЗВЕРХу на стеке
//	cout << st.Peek() << "\n"; // все одно буде 30, тому що ПІК не знімає елемент зі стеку!
//	st.Pop(); // елемент той що був зверху - ВИДАЛЯЄТЬСЯ
//	cout << st.Peek() << "\n";
//	cout << st.Peek() << "\n";
//	cout << st.Peek() << "\n";
//	st.Pop(); // 20 x
//	cout << st.Peek() << "\n";
//	st.Pop(); // 10 x
//	// cout << st.Peek() << "\n"; // error! елементів більше нема
//	st.Pop();
//}

// -----------------------------------------------------------------------------

//class Stack {
//	static const unsigned int SIZE = 10; // кількість елементів у стеці (за бажанням можна змінити)
//
//	int data[SIZE] = {}; // приклад реалізації стека на статичному масиві
//	unsigned int index = 0; // індекс, за яким буде додаватися черговий новий елемент
//	// також індекс можна сприймати як кількість елементів, які були додані в стек на даний момент
//
//public:
//	void Clear() {
//		index = 0;
//	}
//
//	bool IsEmpty() const {
//		return index == 0;
//	}
//
//	bool IsFull() const {
//		return index == SIZE;
//	}
//
//	unsigned int GetCount() const {
//		return index;
//	}
//
//	void Push(int value) {
//		if (!IsFull())
//			data[index++] = value;
//		else
//			throw "Переповнення стека!";
//	}
//
//	void Pop() {
//		if (!IsEmpty())
//			index--;
//		else throw "Стек порожній!";
//	}
//
//	int Peek() {
//		if (!IsEmpty())
//			return data[index - 1];
//		else throw "Стек порожній!";
//	}
//};
//
//int main() {
//	Stack st; // створюємо "порожній" стек
//	st.Push(10); // додаємо елемент в стек 10
//	st.Push(20);
//	st.Push(30);
//	st.Push(40);
//
//	st.Push(50);
//	st.Push(60);
//	st.Push(70);
//	st.Push(80);
//
//	st.Push(90);
//	st.Push(100);
//
//	st.Push(110);
//
//	cout << "OK!\n";
//}

// -----------------------------------------------------------------------------

//class Stack {
//	static const unsigned int SIZE = 10;
//
//	int data[SIZE] = {};
//	unsigned int index = 0;
//
//public:
//	void Clear() {
//		index = 0;
//	}
//
//	bool IsEmpty() const {
//		return index == 0;
//	}
//
//	bool IsFull() const {
//		return index == SIZE;
//	}
//
//	unsigned int GetCount() const {
//		return index;
//	}
//
//	void Push(int value) {
//		if (!IsFull())
//			data[index++] = value;
//		else
//			throw "Stack overflow!";
//	}
//
//	void Pop() {
//		if (!IsEmpty())
//			index--;
//		else
//			throw "Stack is empty ";
//	}
//
//	int Peek() const {
//		if (!IsEmpty())
//			return data[index - 1];
//		else
//			throw "Stack is empty";
//	}
//
//	// Додаємо функцію для виводу стеку (без видалення)
//	void PrintStack() const {
//		cout << "Stack: ";
//		for (unsigned int i = 0; i < index; ++i) {
//			cout << data[i] << " ";
//		}
//		cout << "\n";
//	}
//};
//
//int main() {
//	Stack st;
//
//	st.Push(10);
//	st.Push(20);
//	st.Push(30);
//	st.Push(40);
//	st.Push(50);
//
//	cout << "Number of elements in the stack: " << st.GetCount() << "\n";
//
//	st.PrintStack();
//}
