#include <iostream>
#include <random>

int main() {
    std::cout << "Welcome o the greatest calcullator on earth!\n";
    char response = 'y';
    while (response != 'n' && response != 'N') {
        int first_number = std::rand() % 200;
        int second_number = std::rand() % 200;

        int answer {};
        std::cout << "Wat's the result of " << first_number << " - " << second_number << " : ";
        std::cin >> answer;

        int correct_answer = first_number - second_number;
        if (answer == correct_answer) {
            std::cout << "Congratulations! You got the result " << correct_answer << " right!\n";
        } else {
            std::cout << "Naah! the correct result is " << correct_answer << '\n';
        }

        std::cout << "Do you want me to try again? (y/n): ";
        std::cin >> response;
    }
    std::cout << "See you later!\n";
}