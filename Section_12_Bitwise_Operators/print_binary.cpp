#include <bitset>
#include <iostream>

int main() {
    unsigned short data { 0b11111110 };

    std::cout << std::showbase;
    std::cout << "data (dec): " << std::dec << data << '\n';
    std::cout << "data (oct): " << std::oct << data << '\n';
    std::cout << "data (hex): " << std::hex << data << '\n';
    std::cout << "data (bin): " << std::bitset<16>(data) << '\n';
}