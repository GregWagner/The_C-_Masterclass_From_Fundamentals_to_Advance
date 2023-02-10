#include <bitset>
#include <iomanip>
#include <iostream>

int main() {

    int COLUMN_WIDTH { 20 };
    unsigned char value1 { 0x3 }; // 0000 0011
    unsigned char value2 { 0x5 }; // 0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "value1 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << '\n';

    std::cout << std::setw(COLUMN_WIDTH) << "value2 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << '\n';

    // AND
    std::cout << "\nBitwise AND\n";
    std::cout << std::setw(COLUMN_WIDTH) << "value1 & value2 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 & value2) << "\n\n";

    // OR
    std::cout << "\nBitwise OR\n";
    std::cout << std::setw(COLUMN_WIDTH) << "value1 | value2 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 | value2) << "\n\n";

    // NOT
    std::cout << "\nBitwise NOT\n";
    std::cout << std::setw(COLUMN_WIDTH) << "~value1 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value1) << '\n';

    std::cout << std::setw(COLUMN_WIDTH) << "~value2 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value2) << '\n';

    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0b01011001) << '\n'; // Using bin literal

    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0x59) << "\n\n"; // Using hex literal

    // XOR
    std::cout << "\nBitwise XOR\n";
    std::cout << std::setw(COLUMN_WIDTH) << "value1 ^ value2 : "
              << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 ^ value2) << "\n\n";
}