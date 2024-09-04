#include <iostream>
#include <format>
#include <bit>

int main()
{
    using namespace std;

    uint16_t x = 0b0000'0000'0011'1011;
    cout << format("{0:016b} {0:8}\n",  x);
    cout << format("{0:016b} {0:8}\n", rotl(x, 2));
    cout << format("{0:016b} {0:8}\n", rotr(x, 1));
    cout << format("{0:016b} {0:8}\n", rotr(x, -1));
    cout << format("{0:016b} {0:8}\n", std::bit_floor(x)); 
    cout << format("{0:016b} {0:8}\n", std::bit_ceil(x));  
    cout << format("has single bit?     {}\n", has_single_bit(x));
    cout << "count leading zero    : " << countl_zero(x) << '\n';
    cout << "count right one bits  : " << countr_one(x) << '\n';
    cout << "set bit count         : " << popcount(x) << '\n';
    cout << "bit width             : " << bit_width(x) << '\n';
}
