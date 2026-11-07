#include <concepts>
#include <type_traits>

template <typename Function>
concept function_of_x = std::invocable<Function, double> && std::convertible_to<std::invoke_result_t<Function, double>, double>;

template <typename Function>
double min_uniform_search(double a, double b, double eps, Function f) {
    double xk = a;
    double step = eps / 2;
    double min_result = xk;
    for (;xk <= b; xk += step)
        min_result = f(xk) < f(min_result) ? xk : min_result;
    return min_result;
}

