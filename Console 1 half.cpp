// ---------------------------------------------------------------
// ООП - об'єктно орієнтоване програмування!
// 
// ООП - це коли функції переносяться з глобалки в структуру
// 
// // як перейти морально з ПП до ООП:
// 0) якщо в коді не було структур - то зробити їх )) по одній структурі на кожну сутність
// 1) ключеве слово struct замінюємо на class
// 2) після фігурної дужки { на наступному рядку написати public: - інакше поля та все інше не будуть доступні
// 3) в тілі класа треба визначити список характеристик сутності (це будуть поля класу)
// 4) після полів треба визначити список дій сутності (що вона міє робити), це будуть функції класу, або методи класу
// class Cat {
// ---------------------------------------------------------------

#include <iostream>
using namespace std;

//struct Cat { // характеристики котика (атрибути, поля, змінні типу)
//	string color;
//	int lapki = 4;
//	string nickname;
//	string klichka; // кличка
//	double weight;
//	double tail_length; // довжина хвоста
//	string poroda;
//	string type;
//	int energy = 100;
//	int health = 100; // здоров'я котика
//} Barsik, Murzik; // дві змінні структурного типу і ті все характеристики відносятся к котикам

// ЩО ВОНА ВМІЄ РОБИТИ???
// 1) мявчати
// 2) спати
// 3) стрибати вночі або зранку
// 4) їсти щосб смачненьке  
// 5) може гратися
// 6) царапкатись

//void Play(Cat& cat) {
//	cout << cat.nickname << " is playing...\n";
//	cat.energy--; // зменшуємо енергію котика. 94
//	cout << cat.nickname << " energy: " << cat.energy << "\n";
//}
//
//void Sleep(Cat& cat) {
//	cout << cat.nickname << " is sleeping...\n";
//	cat.energy = 100; // збільшуємо енергію котика на 10
//	cout << cat.nickname << " energy: " << cat.energy << "\n";
//}
//
//void MakeSound(Cat& cat) {
//	cout << cat.nickname << " MEEOOOOWWW!\n";
//}
//
//int main() {
//	Cat barsik; // створюємо змінну структурного типу Cat, дали ім'я barsik
//	barsik.energy = 95; // енергія котика Barsik , поточний тип енергії
//	barsik.nickname = "Barsik";
//	barsik.lapki = 4;
//	barsik.poroda = "Norwegian Forest";
//	barsik.tail_length = 1;
//	barsik.weight = 5;
//	Play(barsik); // викликаємо функцію Play, передаємо їй котика Barsik
//	Play(barsik);
//	Play(barsik);
//	//MakeSound(barsik); // викликаємо функцію MakeSound, передаємо їй котика Barsik
//	Sleep(barsik); // викликаємо функцію Sleep, передаємо їй котика Barsik
//	Play(barsik); // викликаємо функцію Play, передаємо їй котика Barsik
//}

// ---------------------------------------------------------------

//class Cat { // було struct Cat
//	// тепер це клас Cat, який є шаблоном для створення об'єктів котиків
//	// клас - це структура з функціями та характеристиками
//	// клас - це шаблон для створення об'єктів
//public: // без цього характеристики та функції будуть недоступні. і стає як локал кода
//
//	// 1) характеристики (атрибути, поля, змінні типу)
//	string color;
//	int lapki = 4;
//	string nickname;
//	string klichka;
//	double weight;
//	double tail_length;
//	string poroda;
//	string type;
//	int energy = 100;
//	int health = 100;
//
//	// 2) інтерфейс (взаємодія) ЩО ВОНА ВМІЄ РОБИТИ???
//
//	void Play() {
//		cout << nickname << " is playing...\n";
//		energy--;
//		cout << "Energy: " << energy << "\n";
//	}
//
//	void Sleep() {
//		cout << nickname << " is sleeping...\n";
//		energy = 100;
//		cout << "Energy: " << energy << "\n";
//	}
//
//	void MakeSound() {
//		cout << nickname << ": MEOOOOWW!...\n";
//	}
//};
//
//
//int main() {
//	Cat barsik;
//	barsik.energy = 95;
//	barsik.nickname = "Barsik";
//	barsik.lapki = 4;
//	barsik.poroda = "Norwegian Forest";
//	barsik.tail_length = 1;
//	barsik.weight = 5;
//	// Play(barsik);
//	barsik.Play();
//	barsik.MakeSound();
//	barsik.Play();
//	barsik.Sleep();
//	barsik.Play();
//}

// ---------------------------------------------------------------

//class Telephone {
//public:
//	string color;
//	int phone = 1;
//	string name;
//	string model;
//	double price;
//	double screen_size;
//	double phone_memory;
//	int battery_capacity = 100;
//
//	void Call() {
//		cout << name << " is calling...\n";
//		battery_capacity -= 5; //
//		cout << "Battery capacity: " << battery_capacity << "%\n\n";
//	}
//	void SendMessage() {
//		cout << name << " is sending a message...\n";
//		battery_capacity -= 2; 
//		cout << "Battery capacity: " << battery_capacity << "%\n\n";
//	}
//	void Charge() {
//		cout << name << " is charging...\n";
//		battery_capacity = 100;
//		cout << "Battery capacity: " << battery_capacity << "%\n\n";
//	}
//	void ShowInfo() {
//		cout << "Phone Name: " << name << "\n";
//		cout << "Model: " << model << "\n";
//		cout << "Color: " << color << "\n";
//		cout << "Price: $" << price << "\n";
//		cout << "Screen Size: " << screen_size << " inches\n";
//		cout << "Memory: " << phone_memory << " GB\n";
//		cout << "Battery Capacity: " << battery_capacity << "%\n\n";
//	}
//	void Play() {
//		cout << name << " is playing a game...\n";
//		battery_capacity -= 20;
//		cout << "Battery capacity: " << battery_capacity << "%\n\n";
//	}
//};
//
//int main() {
//	Telephone iPhone;
//	iPhone.battery_capacity = 98;
//	iPhone.name = "iPhone 11 Pro Max";
//	iPhone.color = "Midnight Green";
//	iPhone.model = "A2161";
//	iPhone.price = 1099.99;
//	iPhone.screen_size = 6.5;
//	iPhone.phone_memory = 256;
//
//
//	iPhone.Call();
//	iPhone.SendMessage();
//	iPhone.Charge();
//	iPhone.Play();
//	iPhone.ShowInfo();
//	
//}

// ---------------------------------------------------------------

class Car {
public:
	string color;
	int wheels = 4;
	string model;
	string brand;
	double price;
	double engine_capacity;
	int fuel_level = 100;
	

	void Drive() {
		
		cout << brand << " " << model << " is driving...\n";
		fuel_level -= 10; 
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
public:
	string title;
	string author;
	int pages;
	double price;
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
public:
	string color;
	int phone = 1;
	string name;
	string model;
	double price;
	double screen_size;
	double phone_memory;
	int battery_capacity = 100;
	void Call() {
		cout << name << " is calling...\n";
		battery_capacity -= 5;
		cout << "Battery capacity: " << battery_capacity << "%\n\n";
	}
	void SendMessage() {
		cout << name << " is sending a message...\n";
		battery_capacity -= 2;
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
		battery_capacity -= 20;
		cout << "Battery capacity: " << battery_capacity << "%\n\n";
	}
};

class Pen {
public:
	string color;
	string type;
	double price;
	int ink_level = 100; // рівень чорнила
	void Write() {
		if (ink_level > 0) {
			cout << "Writing with " << type << " pen...\n";
			ink_level -= 10; // зменшуємо рівень чорнила
			cout << "Ink level: " << ink_level << "%\n\n";
		}
		else {
			cout << "Ink is empty! Please refill.\n\n";
		}
	}
	void Refill() {
		cout << "Refilling " << type << " pen...\n";
		ink_level = 100; // заповнюємо рівень чорнила
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
public:
	string color;
	string type;
	double price;
	int battery_capacity = 100;
	void PlayMusic() {
		if (battery_capacity > 0) {
			cout << "Playing music with " << type << " headphones...\n";
			battery_capacity -= 10; 
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

	tesla.fuel_level = 95; // рівень пального
	tesla.brand = "Tesla";
	tesla.model = "Model S";
	tesla.color = "Red";
	tesla.price = 79999.99;
	tesla.engine_capacity = 0; // електромобіль, тому об'єм двигуна 0
	tesla.Drive(); // викликаємо метод Drive
	tesla.ShowInfo(); // показуємо інформацію про автомобіль
	tesla.Drive(); // знову їдемо
	tesla.Refuel(); // викликаємо метод Refuel

	cout << "-----------------------------------------------------------\n";

	harryPotter.title = "Harry Potter and the Philosopher's Stone";
	harryPotter.author = "J.K. Rowling";
	harryPotter.pages = 223;
	harryPotter.price = 19.99;
	harryPotter.Read(); // читаємо книгу
	harryPotter.ShowInfo(); // показуємо інформацію про книгу

	cout << "-----------------------------------------------------------\n";

	iPhone.battery_capacity = 98; // рівень заряду батареї
	iPhone.name = "iPhone 11 Pro Max";
	iPhone.color = "Midnight Green";
	iPhone.model = "A2161";
	iPhone.price = 1099.99;
	iPhone.screen_size = 6.5; // розмір екрану
	iPhone.phone_memory = 256; // пам'ять телефону
	iPhone.Call(); // викликаємо метод Call
	iPhone.SendMessage(); // викликаємо метод SendMessage
	iPhone.Charge(); // викликаємо метод Charge
	iPhone.Play(); // викликаємо метод Play
	iPhone.ShowInfo(); // показуємо інформацію про смартфон

	cout << "-----------------------------------------------------------\n";

	bluePen.color = "Blue";
	bluePen.type = "Ballpoint";
	bluePen.price = 1.99; // ціна ручки
	bluePen.Write(); // викликаємо метод Write
	bluePen.ShowInfo(); // показуємо інформацію про ручку
	bluePen.Write(); // ще раз пишемо
	bluePen.Refill(); // викликаємо метод Refill
	

	cout << "-----------------------------------------------------------\n";
	
	sonyHeadphones.color = "Black";
	sonyHeadphones.type = "Over-Ear";
	sonyHeadphones.price = 199.99; // ціна навушників
	sonyHeadphones.PlayMusic(); // викликаємо метод PlayMusic
	sonyHeadphones.ShowInfo(); // показуємо інформацію про навушники
	sonyHeadphones.PlayMusic(); // ще раз слухаємо музику
	sonyHeadphones.Charge(); // викликаємо метод Charge
	
	cout << "-----------------------------------------------------------\n";


}

// ---------------------------------------------------------------

// ---------------------------------------------------------------

// ---------------------------------------------------------------

// ---------------------------------------------------------------

// ---------------------------------------------------------------

// ---------------------------------------------------------------