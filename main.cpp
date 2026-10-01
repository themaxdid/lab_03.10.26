#include <iostream>

int main() {

    int32_t height;
    int32_t base;

    std::cout << "Enter the triangle height: " << std::endl;
    std::cin >> height;
    if (height < 0) {
        std::cout << "Error: You entered a negative value!" << std::endl;
        return 0;
    }

    std::cout << "Enter the triangle base: " << std::endl;
    std::cin >> base;
    if (base < 0) {
        std::cout << "Error: You entered a negative value!" << std::endl;
        return 0;
    }
    
    double square = 0.5 * (height * base);

    std::cout << "Triangle area: " << square << std::endl;
}