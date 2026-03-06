#include <iostream>

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int arr[10]{ 102, 13, 433, 21, 811, 39, 7, 20, 1, 35 };
    int temp{0};
    std::cout << "Массив до сортировки: ";
    for (auto el : arr) std::cout << el << " ";
    for (int i = 1; i < 10; ++i) {
        for (int k = 9; k >= i; --k) {
            if (arr[k] < arr[k - 1]) {
                temp = arr[k - 1];
                arr[k - 1] = arr[k];
                arr[k] = temp;
            }
        }
    }
    std::cout << "\nМассив после сортировки: ";
    for (auto el : arr) std::cout << el << " ";
    std::cout << "\n";
}