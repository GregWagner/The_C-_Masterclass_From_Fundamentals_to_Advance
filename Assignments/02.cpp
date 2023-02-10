#include <iostream>

int main() {
    double tempInCelsius {};
    std::cout << "Please enter a degree value in Celsius: ";
    std::cin >> tempInCelsius;

    double tempInFahrenheit { (9.0 / 5) * tempInCelsius + 32 };

    std::cout << tempInCelsius << " Celsius is "
              << tempInFahrenheit << " Fahrenheit\n";
}