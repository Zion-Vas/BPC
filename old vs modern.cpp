#include <iostream>
#include <string>
int main() {
 std::string name;
 int age;
 // Old-style C++ I/O
 std::cout << "Enter your name: ";
 std::cin >> name;
 std::cout << "Enter your age: ";
 std::cin >> age;
 std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
 // Modern C++ I/O
 std::cout << "Enter your name: ";
 std::getline(std::cin, name);
 std::cout << "Enter your age: ";
 std::cin >> age;
 std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
 return 0;
}