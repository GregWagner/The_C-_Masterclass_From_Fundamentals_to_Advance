#include <iostream>

int main() {
    int x {};
    std::cout << "Type in your x location: ";
    std::cin >> x;

    int y {};
    std::cout << "Type in your y location: ";
    std::cin >> y;

    if (x >= 0 && x <= 20 && y >= 0 && y <= 10) {
        std::cout << "You are completely surrounded. Don't move!\n";
    } else {
        std::cout << "You're out of reach!\n";
    }
}