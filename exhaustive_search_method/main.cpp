#include "plains_method.h"
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a = 0.0;
    double b = 1.0;
    double eps = 0.0001;

    auto target_fuction = [](double x) -> double {
        return std::exp(10000.0 * std::pow(x - 0.5, 2)) + x;
    };

    double best_x = min_uniform_search(a, b, eps, target_fuction);

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Minimum finds in x = " << best_x << '\n';
    std::cout << "Function f(x) = " << target_fuction(best_x) << '\n';

    return 0;
}