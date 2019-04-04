
#include <iostream>
#include <string>

template <typename T>
T maximum(const T & a, const T & b) {
    return (a > b ? a : b);         //ternary operator
}

template <typename T>
T minimum(const T & a, const T & b) {
    return (a < b ? a : b);         //ternary operator
}

int main() {
    int a = 32;
    int b = 23;

    std::cout << "Comparing Integers " << a << " and " << b << std::endl;
    std::cout << "max is " << maximum<int>(a, b) << std::endl;
    std::cout << "min is " << minimum<int>(a, b) << std::endl;

    float x = 32.578;
    float y = 23.1398;

    std::cout << "\nComparing Floating Point Numbers " << x << " and " << y << std::endl;
    std::cout << "max is " << maximum<float>(x, y) << std::endl;
    std::cout << "min is " << minimum<float>(x, y) << std::endl;


    return 0;
}

