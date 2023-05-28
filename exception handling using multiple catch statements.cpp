#include <iostream>
#include <stdexcept>
void processNumber(int number) {
 if (number < 0) {
 throw std::out_of_range("Number out of range");
 }
 if (number % 2 == 0) {
 throw std::invalid_argument("Even number not allowed");
 }
 std::cout << "Number processed successfully: " << number << std::endl;
}
int main() {
 int number;
 std::cout << "Enter a positive odd number: ";
 std::cin >> number;
 try {
 processNumber(number);
 }
 catch (const std::out_of_range& e) {
 std::cout << "Out of range exception caught: " << e.what() << std::endl;
 }
 catch (const std::invalid_argument& e) {
 std::cout << "Invalid argument exception caught: " << e.what() << std::endl;
 }
 catch (const std::exception& e) {
 std::cout << "Generic exception caught: " << e.what() << std::endl;
 }
 std::cout << "Program continues to execute after exception handling." << std::endl;
 return 0;
}
