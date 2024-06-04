/*
make sure you are working with a valid memory location before you dereference a pointer. 
we do that using various checks using if statements
*/

#include <iostream>

int main(){
int* p_number{};
p_number = new int{100}; // if we comment this line, we get ,p_number points to an 
                         //invalid address or is a dangling pointer

if(!(p_number == nullptr) ){
std::cout << "p_number points to a valid address" << p_number << std::endl;
std::cout << "*p_number: " << *p_number << std::endl;
std::cout << "p_number " << p_number << std::endl;
}else{
	std::cout << "p_number points to an invalid address or is a dangling pointer" << std::endl;
}
delete p_number;
p_number = nullptr;	
return 0;
}