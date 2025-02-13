#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <cmath>

void quadratic_solver() {
    double a,b,c;
    double surd;
    std::cin >> a >> b >> c;
    if (b*b < 4*a*c) {
        std::cout << "No solution" << std::endl;
    }
    else {
        surd = std::sqrt(b*b - 4*a*c);
        double root1 = (-b - surd)/(2*a);
        double root2 = (-b + surd)/(2*a);
        std::cout << root1 << " " << root2 << std::endl;
    }
}
int main() {
    quadratic_solver();
}






