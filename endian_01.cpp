#include <bit>

void func()
{
	if constexpr (std::endian::native == std::endian::little) {
		//if the execution environment is little endian
	}
	else if (std::endian::native == std::endian::big) {
		//if the execution environment is big endian
	}
	else {
		// if the execution environment is mixed
	}
}
