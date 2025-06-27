#include <cstdint>
#include <bit>
#include <format>
#include <iostream>

int main()
{
	std::uint32_t x = 0b11010110;
	std::uint32_t y = 0b11110000;
	std::cout << std::format("{:032b}\n{:032b}\n{:032b}\n", x, y, x ^ y);

	int hamming_distance = std::popcount(x ^ y); 

	std::cout << "hamming distance = " << hamming_distance << '\n';
	//...
}




