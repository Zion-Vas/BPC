#include<iostream>
class MyClass {
public:
 void print() {
 std::cout << "Printing MyClass object" << std::endl;
 }
 void print(int x) {
 std::cout << "Printing int: " << x << std::endl;
 }
 void print(double x) {
 std::cout << "Printing double: " << x << std::endl;
 }
 MyClass operator+(const MyClass& other) {
 MyClass result;
 // Perform addition operation on MyClass objects
 return result;
 }
};
int main() {
 MyClass obj;
 obj.print(); // Calls print() with no arguments
 obj.print(10); // Calls print() with int argument
 obj.print(3.14); // Calls print() with double argument
 MyClass obj1, obj2;
 MyClass obj3 = obj1 + obj2; // Calls overloaded operator+

 return 0;
}