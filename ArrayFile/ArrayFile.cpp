#include <iostream>
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