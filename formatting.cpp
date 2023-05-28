#include <iostream>
#include <iomanip>
int main() {
 int number = 42;
 double pi = 3.141592653589793;

 // Formatting output using std::ios members
 std::cout.width(10);
 std::cout << "Number: " << number << std::endl;

 std::cout.fill('*');
 std::cout.width(10);
 std::cout << "Pi: " << pi << std::endl;

 std::cout.precision(4);
 std::cout << "Pi: " << pi << std::endl;

 std::cout << std::fixed;
 std::cout << "Pi (fixed): " << pi << std::endl;

 std::cout << std::scientific;
 std::cout << "Pi (scientific): " << pi << std::endl;

 std::cout.unsetf(std::ios::fixed | std::ios::scientific);
 std::cout << "Default: " << pi << std::endl;

 return 0;
}