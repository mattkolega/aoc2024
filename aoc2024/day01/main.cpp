#include <iostream>

#include "input.cpp"
#include "part_one.cpp"
#include "part_two.cpp"

int main() {
    std::cout << "The total difference between lists is: " << part_one(input) << std::endl;
    std::cout << "The similarity score is: " << part_two(input) << std::endl;

    return 0;
}
