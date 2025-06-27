#include <bit>

int main()
{
	static_assert(std::endian::native == std::endian::little);
	//static_assert(std::endian::native == std::endian::big);
}
