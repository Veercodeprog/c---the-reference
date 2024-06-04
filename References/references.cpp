/*
* References are like pointers but they are not variables. They are just aliases for other variables.
* They are used to pass arguments to functions by reference.
* refrences vs pointers
* 1. References cannot be NULL.must be initialized to an object when declared. Pointers can be NULL and can be assigned later.
* 2. Once a reference is initialized to an object, it cannot be changed to refer to another object.
* Pointers can be changed to point to another object.
*3. references dont use dereference operator. They are automatically dereferenced.
*4. references are safer than pointers.
*
*
*/

#include <iostream>

int main() {
int int_value{45};
    double double_value{3.14};

    int &reference_to_int_value { int_value}; // reference through initialization
    int &reference_to_int_value2 = int_value; // reference through assignment
    double &reference_to_double_value = double_value;

    std::cout << "int_value: " << int_value << std::endl;
    std::cout << "reference_to_int_value: " << reference_to_int_value << std::endl;
    std::cout << "reference_to_int_value2: " << reference_to_int_value2 << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "reference_to_double_value: " << reference_to_double_value << std::endl;
    std::cout << "&int_value: " << &int_value << std::endl;
    std::cout << "&reference_to_int_value: " << &reference_to_int_value << std::endl;
    std::cout << "&reference_to_int_value2: " << &reference_to_int_value2 << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&reference_to_double_value: " << &reference_to_double_value << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
    std::cout << "size of reference_to_int_value: " << sizeof(reference_to_int_value) << std::endl;
    int_value = 100;
    double_value = 45.45;
    std::cout << "int_value: " << int_value << std::endl;
    std::cout << "&int_value: " << &int_value << std::endl;
   std::cout << "double_value: " << double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl ;
    std::cout << "reference_to_int_value: " << reference_to_int_value << std::endl;
    std::cout << "&reference_to_int_value: " << &reference_to_int_value << std::endl;
    std::cout << "reference_to_double_value: " << reference_to_double_value << std::endl;
    std::cout << "&reference_to_double_value: " << &reference_to_double_value << std::endl;
    reference_to_int_value = 200;
    reference_to_double_value = 50.50;
std::cout << "int_value: " << int_value << std::endl;
    std::cout << "&int_value: " << &int_value << std::endl;
   std::cout << "double_value: " << double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl ;
    std::cout << "reference_to_int_value: " << reference_to_int_value << std::endl;
    std::cout << "&reference_to_int_value: " << &reference_to_int_value << std::endl;
    std::cout << "reference_to_double_value: " << reference_to_double_value << std::endl;
    std::cout << "&reference_to_double_value: " << &reference_to_double_value << std::endl;

    return 0;
 }
