#include <cstdint>
#include <bit>
#include <iostream>

int main()
{
    std::uint64_t white_pawns = 0b00000000'00000000'00000000'00000000'00000000'00000000'11111111'00000000;
    int pawn_count = std::popcount(white_pawns); // 8
    
    std::cout << "pawn_count = " << pawn_count << '\n';
}

