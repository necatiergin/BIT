#include <cstdint>
#include <bit>
#include <iostream>
#include <format>

int main()
{
    using namespace std;

    for (uint8_t mask = 0u; mask < 255; ++mask) {
        if (std::popcount(mask) == 3) {
            std::cout << std::format("{:08b}\n", mask);
        }
    }
}
