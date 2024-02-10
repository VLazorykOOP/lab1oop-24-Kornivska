/*#include <iostream>
#include <fstream>
#include <vector>



// Функція для введення масиву з консолі
void inputArray(std::vector<int>& arr) {
    std::cout << "Enter " << arr.size() << " elements:\n";
    for (int i = 0; i < arr.size(); ++i) {
        std::cin >> arr[i];
    }
}
// Функція для запису масиву в текстовий файл
void writeArrayToFile(const std::vector<int>& arr, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < arr.size(); ++i) {
            file << arr[i] << " ";
        }
        file.close();
        std::cout << "Array is written " << filename << std::endl;
    }
    else {
        std::cerr << "Error" << std::endl;
    }
}
int main() {
    int size;
    std::cout << "Enter array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    std::vector<int> A(size), B(size), C(size);
    // Введення масиву A з консолі
    inputArray(A);

    // Введення масиву B з консолі
    inputArray(B);
    // Запис масивів у текстові файли
    writeArrayToFile(A, "array_A.txt");
    writeArrayToFile(B, "array_B.txt");
    // Побудова масиву C, де C[i] = A[i] * B[i]
    for (int i = 0; i < size; ++i) {
        C[i] = A[i] * B[i];
    }
    // Виведення масиву C на консоль
    std::cout << "Array C, where C[i] = A[i] * B[i]: ";
    for (int i = 0; i < size; ++i) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}*/

#include <iostream>
#include <fstream>
#include <climits>

// Функція для знаходження максимального парного елемента перед першим непарним
int maxEvenBeforeOdd(const int arr[], int size) {
    int maxEven = INT_MIN; // Початкове значення максимального парного елемента
    bool foundOdd = false; // Флаг, який показує, чи був знайдений перший непарний елемент
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) { // Перевіряємо, чи є елемент парним
            if (!foundOdd) {
                maxEven = std::max(maxEven, arr[i]); // Оновлюємо максимальний парний елемент, якщо ще не знайдений непарний
            }
        }
        else {
            foundOdd = true; // Знайшли перший непарний елемент
        }
    }

    return maxEven;
}
// Функція для введення масиву з консолі
void inputArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

// Функція для запису масиву в текстовий файл
void writeArrayToFile(const int arr[], int size, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < size; ++i) {
            file << arr[i] << " ";
        }
        file.close();
        std::cout << "Array was successfully written to the file " << filename << std::endl;
    }
    else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }
}

int main() {
    int N;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;

    if (N <= 0) {
        std::cerr << "Invalid size. Size must be a positive integer." << std::endl;
        return 1;
    }

   