#include <bit>

struct Nec {
	std::uint16_t x;
	std::uint16_t y;
};

int main()
{
	constexpr Nec mynec{124, 9876};

	constexpr auto val = std::bit_cast<std::uint32_t>(mynec);
}
