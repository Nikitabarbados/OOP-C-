#include <iostream>
#include <fstream>    // ofstream, ifstream
#include <codecvt>    // робота з кодуваннями (запис ієрогліфів у файл)
#include <windows.h>
#include <iomanip>    // setw
#include <io.h>       // _A_ARCH and others
#include <direct.h>

using namespace std;

class FileStreamsDemo {
public:
	static const char* path; // file.txt у папці з проектом

	////////////////////////////////////////////////////////////////////////

	static void TextModeExample() {
		int choice;
		cout << "1. Запис\n2. Читання\n";
		cin >> choice;
		if (choice == 1)
		{
			ofstream out(path); // створюємо вихідний файловий потік і приєднуємо до нього файл, який відкривається на запис у текстовому режимі
			if (!out.is_open()) // якщо відкриття файлу завершилося невдачею - виходимо
			{
				cout << "Помилка відкриття файлу (ЗАПИС)\n";
				return;
			}
			out << 10 << ' ' << 123.5; // зберігаємо дані у файл
			out << "Це текстовий файл";
			out.close(); // закриваємо файловий потік
		}
		else {
			int i;
			double d;
			char str[10];

			ifstream in(path); // створюємо вхідний файловий потік і приєднуємо до нього файл, який відкривається на читання у текстовому режимі
			if (!in.is_open()) // якщо відкриття файлу завершилося невдачею - виходимо
			{
				cout << "Помилка відкриття файлу (ЧИТАННЯ)\n";
				return;
			}
			in >> i >> d; // зчитуємо з файлу дані у змінні
			cout << i << "\n";
			cout << d << "\n";
			while (!in.eof()) // цикл триває доти, доки не настане кінець файлу
			{
				in >> str; // зчитуємо рядок з файлу по одному слову за одну ітерацію циклу
				cout << str << ' ';
			}
			in.close(); // закриваємо файловий потік
		}

		cout << "\nПриклад текстового режиму завершено!\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void CharByCharExample() {
		// створюємо перший файл, з якого дані будуть посимвольно зчитуватися і записуватися у другий файл
		ofstream create;
		create.open("C:\\1\\source.txt", ios::out | ios::trunc);
		// MODES:
		// http://www.cplusplus.com/reference/ios/ios_base/openmode/
		create << "Це тестове рядкове!";
		create.close();

		// створюємо вихідний файловий потік і приєднуємо до нього файл, який відкривається на запис у текстовому режимі
		ofstream out; // З ПРОГРАМИ - У ФАЙЛ
		out.open(path, ios::out | ios::trunc);

		// створюємо вхідний файловий потік і приєднуємо до нього файл, який відкривається на читання у текстовому режимі
		ifstream in; // У ПРОГРАМІ - З ФАЙЛУ
		in.open("C:\\1\\source.txt", ios::in);
		if (!in) // якщо відкриття файлу завершилося невдачею - виходимо
		{
			cout << "Помилка CharByCharExample!\n";
			return;
		}

		while (!in.eof()) // цикл триває доти, доки не настане кінець файлу
		{
			char s;
			in.get(s); // з вхідного потоку зчитуємо посимвольно текстову інформацію
			if (in.eof()) break; // якщо файл закінчився - екстрений вихід
			cout << s; // виводимо на екран зчитаний символ
			out.put(s); // записуємо у вихідний потік зчитаний символ
		}
		// закриваємо файлові потоки
		out.close();
		in.close();

		cout << "\nПриклад посимвольно завершено!\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void StringByStringExample() {
		// створюємо перший файл, з якого дані будуть посимвольно зчитуватися і записуватися у другий файл
		// ofstream create;
		// create.open("C:\\1\\source.txt", ios::out | ios::trunc);
		// create << "This is a test string!";
		// create.close();

		// створюємо вихідний файловий потік і приєднуємо до нього файл, який відкривається на запис у текстовому режимі
		ofstream out; // З ПРОГРАМИ - У ФАЙЛ
		out.open(path, ios::out | ios::trunc);

		// створюємо вхідний файловий потік і приєднуємо до нього файл, який відкривається на читання у текстовому режимі (файл повинен існувати)
		ifstream in; // У ПРОГРАМІ - З ФАЙЛУ
		in.open("C:\\1\\source.txt", ios::in);
		if (!in) // якщо відкриття файлу завершилося невдачею - виходимо
		{
			cout << "Помилка StringByStringExample!\n";
			return;
		}
		while (!in.eof()) // цикл триває доти, доки не настане кінець файлу
		{
			char buf[_MAX_PATH];
			in.getline(buf, _MAX_PATH);
			if (!in.fail())
			{
				cout << buf << "\n";
				out << buf << "\n";
			}
		}
		// закриваємо файлові потоки
		out.close();
		in.close();

		cout << "\nПриклад рядок за рядком завершено!\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void StringReadingExample() {
		ofstream book_file("BOOKINFO.DAT");

		book_file << "Мова програмування C++, " << "четверте видання" << "\n";
		book_file << "Видавництво: Фабула" << "\n";
		book_file << "Ціна: 1279.95 гривень" << "\n";

		ifstream input_file("BOOKINFO.DAT");
		char one[64], two[64], three[64];

		/*
		input_file >> one; // зчитуємо по одному слову
		input_file >> two;
		input_file >> three;
		*/

		/*
		input_file.getline(one, sizeof(one)); // зчитуємо по одному рядку
		input_file.getline(two, sizeof(two));
		input_file.getline(three, sizeof(three));

		cout << one << "\n";
		cout << two << "\n";
		cout << three << "\n";
		*/

		char line[64];
		while (!input_file.eof()) {
			input_file.getline(line, sizeof(line));
			cout << line << "\n";
		}

		cout << "\nПриклад читання рядків завершено!\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void BinaryArrayExample() {
		const int size = 10;
		int A[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		// відкривається файл на запис у бінарному режимі: якщо файл не існує - він буде створений, якщо файл існує - він буде обрізаний до нульової довжини
		ofstream out("array.txt", ios::binary | ios::trunc | ios::out);

		out.write((char*)&size, sizeof(size)); // у файл зберігається розмірність масиву
		out.write((char*)A, sizeof(A)); // у файл зберігається масив
		out.close(); // файловий потік закривається

		// відкривається файл на читання у бінарному режимі: при цьому файл повинен існувати
		ifstream in("array.txt", ios::binary | ios::in);
		int count;
		in.read((char*)&count, sizeof(count)); // зчитуємо розмір масиву у змінну

		int* p = new int[count]; // виділяємо пам'ять під масив даних
		in.read((char*)p, sizeof(int) * count); // зчитуємо з файлу масив
		in.close(); // файловий потік закривається

		for (int i = 0; i < count; i++)
		{
			cout << p[i] << '\t'; // показуємо на екран зчитаний масив
		}
		delete[] p;

		cout << "\nПриклад бінарного масиву завершено!\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void StructToFileExample() {
		struct Student {
			char name[20];
			char surname[20];
			int age;
			double average;
		};

		int n;
		cout << "1. Запис\n2. Читання\n";
		cin >> n;
		if (n == 1) {
			ofstream out("student.txt", ios::binary | ios::out | ios::trunc); // створюємо вихідний файловий потік і приєднуємо до нього файл, який відкривається на запис
			if (!out.is_open()) // якщо відкриття файлу завершилося невдачею - виходимо
			{
				cout << "Помилка StructToFileExample (ЗАПИС)\n";
				return;
			}

			int a = 100;
			double d = 40.5;
			bool b = true;

			Student st;
			st.age = 35;
			st.average = 11.5;
			strcpy_s(st.name, 10, "John");
			strcpy_s(st.surname, 10, "Doe");

			// http://www.cplusplus.com/reference/istream/istream/seekg/
			// http://www.cplusplus.com/reference/ostream/ostream/seekp/

			// природно, на практиці не потрібно буде писати дані у файл такими «стрибками» - код просто демонструє функції seekp seekg
			out.seekp(sizeof(Student), ios::beg); // зміщуємо файловий вказівник у вихідному потоці на розмір структури від початку	
			out.write((char*)&a, sizeof(a)); // записуємо int-значення у потік
			out.write((char*)&b, sizeof(b)); // записуємо bool-значення у потік	

			out.seekp(0, ios::beg); // зміщуємо файловий вказівник у вихідному потоці у початок
			out.write((char*)&st, sizeof(st)); // записуємо структуру у потік

			out.seekp(5, ios::cur); // зміщуємо файловий вказівник у вихідному потоці на 5 позицій вперед від поточної позиції
			out.write((char*)&d, sizeof(d)); // записуємо double-значення у потік
			out.close(); // закриваємо вихідний файловий потік
		}
		else {
			ifstream in("student.txt", ios::binary | ios::in); // створюємо вхідний файловий потік і приєднуємо до нього файл, який відкривається на читання у текстовому режимі
			if (!in.is_open()) // якщо відкриття файлу завершилося невдачею - виходимо
			{
				cout << "Помилка StructToFileExample (ЧИТАННЯ)\n";
				return;
			}

			in.seekg(sizeof(Student), ios::beg); // зміщуємо файловий вказівник у вхідному потоці на розмір структури від початку	
			int a;
			in.read((char*)&a, sizeof(a)); // зчитуємо з потоку int-значення
			cout << "\n" << a << "\n" << "\n";
			bool b;
			in.read((char*)&b, sizeof(b)); // зчитуємо з потоку bool-значення
			cout << b << "\n" << "\n";
			in.seekg(0, ios::beg); // зміщуємо файловий вказівник у вхідному потоці у початок
			Student st;
			in.read((char*)&st, sizeof(Student)); // зчитуємо з потоку структуру
			cout << st.name << "\n" << st.surname << "\n" << st.age << "\n" << st.average << "\n" << "\n";
			in.seekg(-8, ios::end); // зміщуємо файловий вказівник у вхідному потоці на 8 позицій назад від кінця
			double d;
			in.read((char*)&d, sizeof(d)); // зчитуємо з потоку double-значення
			cout << d << "\n";
			in.close(); // закриваємо вхідний потік
		}

		cout << "\nПриклад структури у файл завершено!\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void FileSizeExample() {
		ifstream in("C:\\1\\1.jpg", ios::binary | ios::in);
		if (!in) {
			cout << "Помилка FileSizeExample!\n";
			return;
		}

		in.seekg(0, ios::end);
		cout << "Розмір файлу: " << in.tellg() << " Б\n\n";
		in.close();

		cout << "\nПриклад розміру файлу завершено!\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void UnicodeExample() {
		setlocale(0, "");
		ofstream outFile(path, ios::binary);

		if (!outFile) {
			cout << "Помилка відкриття файлу для запису!\n";
			return;
		}

		wstring_convert<codecvt_utf8<wchar_t>> converter;
		string utf8str = converter.to_bytes(L"ієрогліфи: 你好, 世界");

		outFile.write(utf8str.c_str(), utf8str.size());

		outFile.close();

		cout << "Дані успішно записані у файл.\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void Practice() {
		cout << "Напишіть програму, яка показує на екрані консолі меню,\n";
		cout << "що складається з двох пунктів. При виборі пункту 1 у бінарний файл\n";
		cout << "записується (або дописується в кінець) один об'єкт класового\n";
		cout << "типу Person. При виборі пункту 2 - на екрані відображається\n";
		cout << "вміст полів усіх об'єктів з цього файлу.\n";
	}

	////////////////////////////////////////////////////////////////////////

	static void ShowFilesInDirectory(const char* path, const char* mask) {
		// FILE ATTRIBUTES:

		/*	_A_ARCH
			Archive.Set whenever the file is changedand cleared by the BACKUP command.Value: 0x20.

			_A_HIDDEN
			Hidden file.Not generally seen with the DIR command, unless you use the / AH option.Returns information about normal files and files that have this attribute.Value: 0x02.

			_A_NORMAL
			Normal.File has no other attributes set and can be read or written to without restriction.Value: 0x00.

			_A_RDONLY
			Read - only.File cannot be opened for writingand a file that has the same name cannot be created.Value: 0x01.

			_A_SUBDIR
			Subdirectory.Value: 0x10.

			_A_SYSTEM
			System file.Not ordinarily seen with the DIR command, unless the / A or /A:S option is used.Value : 0x04.

			*/

			// system("mode con cols=150 lines=50");

		const int ATTRIB_LENGTH = 32;

		char* fullpath = new char[FILENAME_MAX];

		strcpy_s(fullpath, FILENAME_MAX - 1, path);
		strcat_s(fullpath, FILENAME_MAX - 1, mask);

		// https://docs.microsoft.com/en-us/cpp/c-runtime-library/filename-search-functions?view=vs-2019
		_finddata_t fileinfo;

		long long snapshot = _findfirst(fullpath, &fileinfo);
		long long success = snapshot;

		while (success != -1) {
			if (strcmp(fileinfo.name, ".") != 0 &&
				strcmp(fileinfo.name, "..") != 0) {
				if (fileinfo.attrib & _A_SUBDIR) {
					// cout << "Folder! - ";
					// cout << fileinfo->name << "\n";

					char newpath[FILENAME_MAX];
					strcpy_s(newpath, FILENAME_MAX - 1, path);
					strcat_s(newpath, FILENAME_MAX - 1, fileinfo.name);
					strcat_s(newpath, FILENAME_MAX - 1, "\\");
					ShowFilesInDirectory(newpath, mask);
				}
				else {
					// total++;
					char attributes[ATTRIB_LENGTH + 1];
					_itoa_s(fileinfo.attrib, attributes, ATTRIB_LENGTH, 2);
					printf("%032s - ", attributes);
					cout << path << fileinfo.name << "\n";
				}
			}
			success = _findnext(snapshot, &fileinfo);
		}

		_findclose(snapshot);

		delete[] fullpath;
	}

	////////////////////////////////////////////////////////////////////////

	static long long DirectorySize(const char* path) {
		long long size = 0;
		char find[MAX_PATH];
		strcpy_s(find, MAX_PATH, path);
		strcat_s(find, MAX_PATH, "\\*.*");
		_finddata_t f;
		long long handle = _findfirst(find, &f);
		long long result = handle;
		while (result != -1) {
			if (strcmp(f.name, ".") == 0 || strcmp(f.name, "..") == 0)
			{
				result = _findnext(handle, &f);
				continue;
			}
			if (f.attrib & 1 << 4) // f.attrib & _A_SUBDIR
			{
				strcpy_s(find, MAX_PATH, path);
				strcat_s(find, MAX_PATH, "\\");
				strcat_s(find, MAX_PATH, f.name);
				size += DirectorySize(find);
			}
			else
				size += f.size;
			result = _findnext(handle, &f);
		}
		_findclose(handle);
		return size;
	}

	////////////////////////////////////////////////////////////////////////

	static void CreateRenameRemove() {
		setlocale(0, "");
		cout << "Введіть шлях до файлу для видалення: ";
		char pathname[256];
		cin >> pathname;
		if (remove(pathname) == -1) perror("Open: ");
		else cout << "Файл успішно видалено!\n";

		cout << "Введіть шлях до папки для створення: ";
		cin >> pathname;
		if (_mkdir(pathname) == -1) perror("Open: ");
		else cout << "Папка успішно створена!";

		cout << "Введіть шлях до папки для видалення: ";
		cin >> pathname;
		if (_rmdir(pathname) == -1) cout << "Помилка видалення папки!";
		else cout << "Папка успішно видалена!";

		char oldpath[MAX_PATH], newpath[MAX_PATH];
		cout << "Введіть шлях до файлу, який потрібно перейменувати: ";
		cin >> oldpath;
		cout << "Введіть новий шлях (і/або ім'я файлу): ";
		cin >> newpath;
		if (rename(oldpath, newpath) == -1) perror("Open: ");
		else cout << "Файл успішно перейменовано!";
	}

	////////////////////////////////////////////////////////////////////////

	static void LogicalDrives() {
		cout << "Drives list:\n";
		int drivesBitMask = GetLogicalDrives();
		char drive = 'A';
		char root[4] = {};
		int type = 0;

		while (drivesBitMask) {
			if (drivesBitMask & 1) {
				cout << "Drive " << drive << ": is present. ";
				sprintf_s(root, "%c:\\", 256, drive);
				type = GetDriveTypeA(root);
				switch (type) {
				case DRIVE_UNKNOWN:
					cout << "Drive type is unknown!";
					break;
				case DRIVE_CDROM:
					cout << "Drive is CD-ROM";
					break;
				case DRIVE_REMOTE:
					cout << "Drive is Remote disk";
					break;
				case DRIVE_REMOVABLE:
					cout << "Drive is Removable";
					break;
				case DRIVE_NO_ROOT_DIR:
					cout << "Root path to drive is invalid";
					break;
				case DRIVE_FIXED:
					cout << "Drive is fixed. HDD, for example";
					break;
				case DRIVE_RAMDISK:
					cout << "Drive is a RAM disk";
					break;
				}

				cout << "\n";
			}

			drive++;
			drivesBitMask >>= 1;
		}
	}

	////////////////////////////////////////////////////////////////////////

	static void Test() {
		// TextModeExample();
		// CharByCharExample();
		// StringByStringExample();
		// StringReadingExample();
		// BinaryArrayExample();
		// StructToFileExample();
		// FileSizeExample();
		UnicodeExample();
		// Practice();
		// ShowFilesInDirectory("C:\\1\\", "*.*");
		// cout << "Directory size: " << DirectorySize("C:\\1\\") / 1024 / 1024 << " MB\n";
		// CreateRenameRemove();
		// LogicalDrives();
	}
};

const char* FileStreamsDemo::path = "file.txt";

int main() {
	system("title File Streams CPP");
	system("color 0F");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	FileStreamsDemo::Test();
	Sleep(INFINITE);
}