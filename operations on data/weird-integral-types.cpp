/*
integral types less than 4 bytes in size dont support arithmetic operations like addition, subtraction, multiplication, division, and modulus with other integral types.
eg. char, short, unsigned short, unsigned char, etc.
*/

#include <iostream>

int main (){
short int  var1 {10};
short int  var2 {20};
char var3 {40};
char var4 {50};

std::cout << "size of var1: " << sizeof(var1) << std::endl;
std::cout << "size of var2: " << sizeof(var2) << std::endl;
std::cout << "size of var3: " << sizeof(var3) << std::endl;
std::cout << "size of var4: " << sizeof(var4) << std::endl;



auto result = var1 + var2;
auto result2 = var3 + var4;
short int result3 = var1 + var2;

std::cout << "size of result: " << sizeof(result) << std::endl;
std::cout << "size of result2: " << sizeof(result2) << std::endl;
std::cout << "size of result3: " << sizeof(result3) << std::endl;
std::cout << "result3: " << result3 << std::endl;

return 0;
}