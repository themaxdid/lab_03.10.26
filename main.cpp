#include <iostream>
#include <limits>

/*
2 вариант лабораторной работы
*/

int main() {

    int32_t height;
    int32_t base;

    std::cout << "Enter the triangle height: ";
    std::cin >> height;
    while (std::cin.fail() || height < 0) {
        std::cout << "Error: Invalid input! Please enter a valid number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Enter the triangle height: ";
        std::cin >> height;
    }

    std::cout << "Enter the triangle base: ";
    std::cin >> base;
    while (std::cin.fail() || base < 0) {
        std::cout << "Error: Invalid input! Please enter a valid number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Enter the triangle base: ";
        std::cin >> base;
    }
    
    double square = 0.5 * (height * base);

    std::cout << "Triangle area: " << square;

    return 0;
}