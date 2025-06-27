#include <bit>
#include <cstring>

int main()
{
	float pi = 3.14f;

	auto x = static_cast<int>(pi); 
	//auto y = reinterpret_cast<int>(pi); //error
	auto z = *reinterpret_cast<int *>(&pi); //ub

	union Fint {
		float f;
		int i;
	};

	Fint fnt = {pi};
	int t = fnt.i; //ub (not an active member)
	int i{};

	std::memcpy(&x, &pi, sizeof(x)); //well defined
	auto uval = std::bit_cast<unsigned int>(pi); // well defined
	//...
}
