

#include <iostream>

int main(){
char *p_char_var = nullptr;
char char_var {'A'};

p_char_var = &char_var;
std::cout << "char_var: " << char_var << std::endl;
std::cout << "p_char_var: " << p_char_var << std::endl;

char char_var1 {'B'};
p_char_var = &char_var1;
std::cout << "char_var1: " << char_var1 << std::endl;
std::cout << "p_char_var: " << p_char_var << std::endl;

// we can inititalize a pointer to a character with a string literal
char *p_message {"Hello World!"};

std::cout << "p_message: " << p_message << std::endl;
std::cout << "the value stored at p_message is : " << *p_message << std::endl;

const char *msg{"Hello World!"};
std::cout << "msg: " << msg << std::endl;
// *msg = 'J'; this will give an error
std::cout << "the value stored at msg is : " << *msg << std::endl;
return 0;
}