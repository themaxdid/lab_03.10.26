#include <iostream>
#include <limits>

/*
Вариант 2.
Написать программу, которая получает на вход 2 целых числа 
h и a (0 < h,a < 10^8) – высоту и основание треугольника. 
Рассчитать площадь треугольника.
*/

int main() {

    int64_t height;
    std::cout << "Enter the triangle height: ";
    std::cin >> height;

    int64_t base;
    std::cout << "Enter the triangle base: ";
    std::cin >> base;
    
    double square = 0.5 * (height * base);

    std::cout << "Triangle area: " << square;

    return 0;
}