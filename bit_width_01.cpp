#include <cstdint>
#include <bit>
#include <iostream>

int main()
{
	std::cout << std::bit_width(0u) << "\n";        // 0
	std::cout << std::bit_width(1u) << "\n";        // 1 (00000001)
	std::cout << std::bit_width(2u) << "\n";        // 2 (00000010)
	std::cout << std::bit_width(3u) << "\n";        // 2 (00000011)
	std::cout << std::bit_width(4u) << "\n";        // 3 (00000100)
	std::cout << std::bit_width(7u) << "\n";        // 3 (00000111)
	std::cout << std::bit_width(8u) << "\n";        // 4 (00001000)
	std::cout << std::bit_width(255u) << "\n";      // 8
	std::cout << std::bit_width(256u) << "\n";      // 9
}

