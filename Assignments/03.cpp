#include <iostream>

int main() {

    std::cout << "Welcome to box calculator. Please type in "
              << " length, width, and height information:" << std::endl;

    double length {};
    std::cout << "length: ";
    std::cin >> length;

    double width {};
    std::cout << "width: ";
    std::cin >> width;

    double height {};
    std::cout << "height: ";
    std::cin >> height;

    double base_area = width * length;
    std::cout << "The base area is " << base_area << '\n';
    std::cout << "The volume area is " << base_area * height << '\n';
}