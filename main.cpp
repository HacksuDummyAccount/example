#include <iostream>
#include <string>

int main () {
    int x = 3;
    std::string output;
    std::cout << "HELLO PLEASE PROVIDE INPUT ";
    std::cin >> output;

    std::cout << "YOUR OUTPUT: " << output + std::to_string(x) << endl; 
}