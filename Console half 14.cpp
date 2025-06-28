#include <iostream>
using namespace std;

// 8 функція, що визначає середнє арифметичне елементів переданого їй масиву.
double Average(double arr[], int size) {
    if (size <= 0) return 0;
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// 9 функція, яка виводить на екран мінімум та максимум (значення та індекс) серед елементів переданого їй масиву.
void FindMinMax(double arr[], int size) {
    if (size <= 0) {
        cout << "Array is empty" << "\n";
        return;
    }

    double minVal = arr[0], maxVal = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    cout << "Minimum value: " << minVal << " at index " << minIndex << "\n";
    cout << "Maximum value: " << maxVal << " at index " << maxIndex << "\n";
}

// 10 функція, яка змінює порядок елементів переданого їй масиву на протилежний
void ReverseArray(double arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        double temp = arr[i]; 
        arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp; 
    }
}

int main() {
	// приклад масиву для тестування функцій
    double arr[] = { 5.2, 3.1, 8.7, 2.4, 9.6, 1.3 };
	int size = sizeof(arr) / sizeof(arr[0]); // визначення розміру масиву

    cout << "Arithmetic mean: " << Average(arr, size) << "\n";

    FindMinMax(arr, size);

    // 
    cout << "Original array: ";
     
	for (int i = 0; i < size; i++) { 
        cout << arr[i] << " "; // виведення елементів масиву
    }
    cout << "\n";

    ReverseArray(arr, size);

    cout << "Reversed array: ";
	for (int i = 0; i < size; i++) { // виведення елементів масиву після зміни порядку
        cout << arr[i] << " ";
    }
    cout << "\n";
}