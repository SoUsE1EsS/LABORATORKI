#include <iostream>
#include "matr3d.h"
void tests() {
    std::cout << "\nTests:\n";
    Matr3Diag test_matr;
    test_matr.input(7);
    test_matr.add_to_row(6, 1, 3);
    // tests
    std::cout << test_matr.add_to_row(2, 1, 3) << "\n"; // true
    std::cout << test_matr.add_to_row(7, 1, 3) << "\n"; // false
    std::cout << test_matr.add_to_row(1, 8, 3) << "\n"; // false
    std::cout << test_matr.add_to_row(10, 8, 3) << "\n"; // false
}

int main()
{
    Matr3Diag matrA;
    matrA.input(7);
    matrA.add_to_row(6, 1, 3);
    std::cout << matrA;

    tests();
}
