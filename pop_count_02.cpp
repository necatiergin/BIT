#include <cstdint>
#include <bit>
#include <iostream>

enum Features : uint32_t {
    FTA = 1u << 0,
    FTB = 1u << 1,
    FTC = 1u << 2,
    FTD = 1u << 3,
    FTE = 1u << 4,
};

int main()
{
    std::uint32_t user_choice = FTA | FTC | FTE;
    int active_choice_cnt = std::popcount(user_choice); 

    std::cout << active_choice_cnt << '\n';
}
