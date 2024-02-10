#include <iostream>
#include <fstream>
#include <vector>
// Функція для введення масиву з консолі
void inputArray(std::vector<int>& arr) {
    std::cout << "Введіть " << arr.size() << " цілих чисел:\n";
    for (int i = 0; i < arr.size(); ++i) {
        std::cin >> arr[i];
    }
}
