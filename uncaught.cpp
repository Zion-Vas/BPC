#include <iostream>
#include <stdexcept>
void throwException() {
 throw std::runtime_error("An exception occurred");
}
int main() {
 try {
 throwException();
 }
 catch (const std::exception& e) {
 std::cout << "Exception caught: " << e.what() << std::endl;
 }

 if (std::uncaught_exception()) {
 std::cout << "There is an uncaught exception." << std::endl;
 }
 else {
 std::cout << "No uncaught exception." << std::endl;
 }

 return 0;
}