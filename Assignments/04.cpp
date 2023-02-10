#include <iostream>

int main() {
    unsigned value {};
    std::cout << "Please type an integral value: ";
    std::cin >> value;

    std::cout << value << (value % 2 == 0 ? " is even" : " is odd") << '\n';
}