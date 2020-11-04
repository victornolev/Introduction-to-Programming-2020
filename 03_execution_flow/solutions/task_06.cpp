/**
 * @file   task_06.cpp
 * @author Yosif Ivanov
 * @date   11.2020
 * @brief  Solution for task 6 from practice 3.
 */

#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cout << "a -> ";
    std::cin >> a;

    std::cout << "b -> ";
    std::cin >> b;

    std::cout << "c -> ";
    std::cin >> c;

    if (a == 0 || b == 0 || c == 0) {
        std::cout << "This not a valid quadratic equation!" << std::endl;
        return 1;
    }

    // calculate the discriminant
    double disc = b * b - (4 * a * c);
    if (disc < 0) {
        // negative discriminant
        std::cout << "The equation has no real roots!" << std::endl;
    } else if (disc > 0) {
        // positive discriminant
        double x1, x2;
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = -x1 - b/a;     // Viète's formula
        std::cout << "The equation " << a << "x^2 + " << b << "x + " << c << " = 0"
                   << " has two roots: " << x1 << " and " << x2 << std::endl;
    } else {
        // zero discriminant
        double x = -b / (2 * a);
        std::cout << "The equation " << a << "x^2 + " << b << "x + " << c << " = 0"
                  << " has one double root: " << x << std::endl;
    }

    return 0;
}