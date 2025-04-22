#include <iostream>
#include <string>

int main () {
    double x = 3.14;
    std::cout << x - 5 << std::endl;

    std::string output;
    std::cout << "HELLO PLEASE PROVIDE INPUT ";
    std::cin >> output;

    std::cout << "YOUR OUTPUT: " << output + std::to_string(x) << std::endl;
}