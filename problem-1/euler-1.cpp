#include <iostream>
#include <cstdint>

using std::cout;
using std::endl;

namespace {

using int_type = std::int64_t;

constexpr int_type multiples_sequence(int modulo, int target) {
    return modulo * (target / modulo) * ((target / modulo) + 1) / 2;
}

constexpr int_type sum_of_multiples(int first, int second, int_type target) {
    return multiples_sequence(first, target - 1)
        + multiples_sequence(second, target - 1)
        - multiples_sequence(first * second, target - 1);
}

} // anonymous namespace

int main() {
    static const int_type x = sum_of_multiples(3, 5, 1000);
    cout << x << endl;
}
