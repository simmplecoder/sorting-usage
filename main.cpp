#include <iostream>
#include <algorithm>
#include <sorting/counting_sort.hpp>

int main() {
    std::vector v{5, 2, 3, 7, 4, 1};
    shino::counting_sort(v.begin(), v.end(), 7);
    return !std::is_sorted(v.begin(), v.end());
}
