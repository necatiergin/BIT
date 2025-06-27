#include <bit>

struct Nec {
	std::uint16_t x;
	std::uint16_t y;
};

int main()
{
	Nec nec{3, 5};
	auto x = std::bit_cast<uint32_t, Nec>(nec);
	auto y = std::bit_cast<int, Nec>(nec);
	//auto z = std::bit_cast<long long, Nec>(nec); //error
	//auto t = std::bit_cast<uint16_t, Nec>(nec); //error
}
