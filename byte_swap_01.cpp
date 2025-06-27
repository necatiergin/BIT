#include <cstdint>
#include <bit>
#include <format>
#include <iostream>

int main() 
{
    std::uint32_t x = 0x12345678;
    std::uint32_t y = std::byteswap(x);

    std::cout << std::format("{:#X}\n{:#X}\n", x, y);
}
