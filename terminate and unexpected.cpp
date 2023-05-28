#include <iostream>
#include <exception>
void myUnexpectedHandler() {
 std::cout << "Unexpected exception occurred." << std::endl;
 std::terminate();
}
void myTerminateHandler() {
 std::cout << "Terminating due to an unhandled exception." << std::endl;
 std::abort();
}
void throwException() {
 throw 42;
}
int main() {
 std::set_unexpected(myUnexpectedHandler);
 std::set_terminate(myTerminateHandler);
 try {
 throwException();
 }
 catch (const std::exception& e) {
 std::cout << "Exception caught: " << e.what() << std::endl;
 }

 return 0;}