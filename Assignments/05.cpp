#include <iostream>

int main() {
    int age {};
    std::cout << "Please enter your age: ";
    std::cin >> age;

    if (age < 21) {
        std::cout << "Sorry, you are too young for the treatment.\n";
    } else if (age > 39) {
        std::cout << "Sorry, you are too old for the treatment.\n";
    } else {
        std::cout << "You are eligible for the treatment.\n";
    }
}