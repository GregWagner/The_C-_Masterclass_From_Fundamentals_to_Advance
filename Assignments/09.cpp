#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> months { "January", "Feburary", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "Decemary" };

    int year {};
    std::cout << "Enter a year: ";
    std::cin >> year;

    int first_day {};
    std::cout << "Enter the first day of the year [1: Monday, ..., 7: Sunday]: ";
    std::cin >> first_day;

    std::cout << "\n\nCalendar for " << year << '\n';

    for (int month {}; month < months.size(); ++month) {
        std::cout << "--" << months[month] << ' ' << year << "--\n";
        std::cout << "   Mon   Tue   Wed   Thu   Fri   Sat   Sun\n";
    }
}