#include <iostream>
#include <stdexcept>
class DivideByZeroException : public std::runtime_error {
public:
 DivideByZeroException() : std::runtime_error("Division by zero is not allowed") {}
};
void divideNumbers(int numerator, int denominator) {
 if (denominator == 0) {
 throw DivideByZeroException();
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
 catch (const DivideByZeroException& e) {
 std::cout << "Exception caught: " << e.what() << std::endl;
 }
 std::cout << "Program continues to execute after exception handling." << std::endl;
 return 0;
}