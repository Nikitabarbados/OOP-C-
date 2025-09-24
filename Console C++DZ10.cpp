#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(0, "UKR");

    string cities[] = {
        "Київ", "Львів", "Одеса", "Харків", "Дніпро",
        "Запоріжжя", "Вінниця", "Чернігів", "Луцьк", "Житомир"
    };

    ofstream outFile("cities.txt");
    if (!outFile) {
        cout << "помилка\n";
        return 0;
    }

    for (int i = 0; i < 10; ++i) {
        outFile << cities[i] << "\n";
    }
    outFile.close();

    ifstream inFile("cities.txt");
    if (!inFile) {
        cout << "помилка\n";
        return 0;
    }

    int ryadokcount = 0;
    string line;
    while (getline(inFile, line)) {
        ryadokcount++;
    }
    inFile.close();

    srand(time(0));
    int randomryadok = rand() % ryadokcount;

    inFile.open("cities.txt");
    if (!inFile) {
        cout << "помилка\n";
        return 0;
    }

    int potochijryadok = 0;
    while (getline(inFile, line)) {
        if (potochijryadok == randomryadok) {
            cout << "Випадкове місто: " << line << "\n";
        }
        potochijryadok++;
    }
    inFile.close();
}