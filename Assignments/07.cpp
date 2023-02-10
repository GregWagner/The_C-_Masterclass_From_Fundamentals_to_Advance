#include <iostream>

int main() {
    int day {};
    std::cout << "Which day is today [1: Monday, ..., 7: Sunday]: ";
    std::cin >> day;

    while (day < 1 || day > 7) {
        std::cout << "That was not a valid day. Please try again.\n";
        std::cin >> day;
    }

    int difference {};
    std::cout << "What is the difference: ";
    std::cin >> difference;

    day = std::abs(day - difference) % 7;
    if (day <= 0) {
        day += 7;
    }

    switch (day) {
    case 1:
        std::cout << "Today is Monday.\n";
        break;
    case 2:
        std::cout << "Today is Tuesday.\n";
        break;
    case 3:
        std::cout << "Today is Wednesday.\n";
        break;
    case 4:
        std::cout << "Today is Thursday.\n";
        break;
    case 5:
        std::cout << "Today is Friday.\n";
        break;
    case 6:
        std::cout << "Today is Saturday.\n";
        break;
    case 7:
        std::cout << "Today is Sunday.\n";
        break;
    default:
        std::cout << day << " is not a valid day.\n";
        break;
    }
}