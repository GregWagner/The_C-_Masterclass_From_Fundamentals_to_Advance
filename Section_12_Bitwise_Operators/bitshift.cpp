#include <iostream>
#include <bitset>

int main() {
    unsigned short value { 0xff0u };

    std::cout << "value: " << std::bitset<16>(value)
              << ", dec: " << value << "\n\n";

    std::cout << "Shifting right >>>>>\n";

    // shift right 1 bit position
    value = static_cast<unsigned short>(value >> 1);
    std::cout << "value: " << std::bitset<16>(value)
              << ", dec: " << value << "\n\n";
}