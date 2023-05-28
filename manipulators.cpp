#include <iostream>
#include <iomanip> // Header for manipulators
int main() {
 int number = 42;
 double pi = 3.141592653589793;

 // Using setw() to set the width of the field
 std::cout << "Number: " << std::setw(10) << number << std::endl;

 // Using setfill() to set the fill character
 std::cout << "Pi: " << std::setfill('*') << std::setw(10) << pi << std::endl;

 // Using setprecision() to set the precision of floating-point values
 std::cout << "Pi: " << std::setprecision(4) << pi << std::endl;

 // Using fixed and scientific to control the notation of floating-point values
 std::cout << "Pi (fixed): " << std::fixed << pi << std::endl;
 std::cout << "Pi (scientific): " << std::scientific << pi << std::endl;

 // Using setbase() to control the number base
 int hexNumber = 0xFF;
 std::cout << "Hexadecimal: " << std::setbase(16) << hexNumber << std::endl;

 return 0;
}