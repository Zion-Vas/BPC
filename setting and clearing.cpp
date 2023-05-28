#include <iostream>
#include <iomanip>
int main() {
 int number = 42;
 double pi = 3.141592653589793;

 // Setting and clearing format flags
 std::cout << "Default: " << number << std::endl;

 std::cout << std::showpos;
 std::cout << "With showpos: " << number << std::endl;

 std::cout << std::uppercase;
 std::cout << "With uppercase: " << pi << std::endl;

 std::cout << std::hex;
 std::cout << "With hex: " << number << std::endl;

 std::cout << std::left;
 std::cout << "With left alignment: " << std::setw(10) << number << std::endl;

 std::cout << std::boolalpha;
 std::cout << "With boolalpha: " << true << std::endl;

 std::cout << std::fixed;
 std::cout << "With fixed: " << pi << std::endl;

 std::cout << std::showbase;
 std::cout << "With showbase: " << number << std::endl;

 std::cout << std::resetiosflags(std::ios::hex);
 std::cout << "After resetting hex: " << number << std::endl;

 std::cout << std::resetiosflags(std::ios::showbase | std::ios::showpos);
 std::cout << "After resetting showbase and showpos: " << number << std::endl;

 return 0;
}