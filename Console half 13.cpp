#include <iostream>
#include <windows.h>
using namespace std;

void SetColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// Line 
void Line(int length, char symbol, int color, bool isHorizontal) {
    SetColor(color);
    if (isHorizontal) {
        for (int i = 0; i < length; i++) {
            cout << symbol;
        }
        cout << "\n";
    }
    else {
        for (int i = 0; i < length; i++) {
            cout << symbol << "\n";
        }
    }
}

// Rectangle 
void Rectangle(int width, int height, char borderSymbol, char fillSymbol,
    int borderColor, int fillColor, int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                SetColor(borderColor);
                cout << borderSymbol;
            }
            else {
                SetColor(fillColor);
                cout << fillSymbol;
            }
        }
        cout << "\n";
        coord.Y++;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
}

// Cube 
double Cube(double number) {
    return number * number * number;
}

// 4. IsPrime перевірка на просте число
bool IsCheck(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    Line(20, '@', 12, true);  // Горизонтальна червона лінія з 20 символів '@'
    cout << "\n";
    Line(5, '@', 12, false);  // Вертикальна червона лінія з 5 символів '@'
    cout << "\n";

    Rectangle(10, 5, '#', '*', 9, 10, 0, 5);  // Прямокутник із синьою рамкою та зеленою заливкою
    cout << "\n";

    cout << "Cube of 3: " << Cube(3) << "\n";
    cout << "Is 17 prime? " << (IsCheck(17) ? "Yes" : "No") << "\n";
    cout << "Is 15 prime? " << (IsCheck(15) ? "Yes" : "No") << "\n";
}
