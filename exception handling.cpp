#include <iostream>
void divideNumbers(int numerator, int denominator) {
 if (denominator == 0) {
 throw std::runtime_error("Division by zero is not allowed");
 }

 int result = numerator / denominator;
 std::cout << "Result: " << result << std::endl;
}
int main() {
 int numerator, denominator;

 std::cout << "Enter the numerator: ";
 std::cin >> numerator;

 std::cout << "Enter the denominator: ";
 std::cin >> denominator;

 try {
 divideNumbers(numerator, denominator);
 }
 catch (const std::exception& e) {
 std::cout << "Exception caught: " << e.what() << std::endl;
 }
 std::cout << "Program continues to execute after exception handling." << std::endl;

 return 0;
}