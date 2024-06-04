/*
a dangling pointer is a pointer that points to a memory location that has been deallocated or freed.basically,it is a pointer that doesnt point to a valid object of the appropriate type.
trying to use dangling pointer will result in undefined behavior.
cases of dangling pointers:
1. uninitialized pointers.
2. when a pointer is pointing to a memory location that has been deallocated (deleted) or freed.
3. multiple pointers pointing to the same memory location and one of them is deleted.
4.)when a pointer is pointing to a local variable and the function where the variable is declared ends.
*/

#include <iostream>
int main(){
// dangling pointer case 1: Unintialized pointer
int* p_number;

std::cout << "Case1 : Unintialized pointer " <<  std::endl << p_number << std::endl; // this will print a garbage value
std::cout << "*p_number: " << *p_number << std::endl; // this will print a garbage value

//solution to case 1: initialize the pointer 
int* p_number5{};
int* p_number6{new int{100}};

if(p_number6!=nullptr){
	std::cout << "p_number6: " << *p_number6 << std::endl;
}
else{
	std::cout << "p_number6 is a dangling pointer" << std::endl;
}

// dangling pointer case 2: when a pointer is pointing to a memory location that has been deallocated (deleted) or freed.

std::cout << std::endl;
std::cout << "Case2 : deallocated (deleted) pointer " <<  std::endl; 
int* p_number1{new int{67}};

std::cout << "p_number1(before delete): " << *p_number1 << std::endl;
delete	p_number1; // this wont cause any problem in case p_number1 is nullptr
std::cout << "p_number1(after delete): " << *p_number1 << std::endl; 

//soulution to case 2: set the pointer to nullptr after deleting it
int* p_number7{new int{82}};

std::cout << "p_number7(before delete): " << *p_number7 << std::endl;
delete	p_number7;
p_number7 = nullptr;
if(p_number7!=nullptr){
	std::cout << "p_number7: " << *p_number7 << std::endl;
}
else{
	std::cout << "p_number7 is a dangling pointer" << std::endl;
}

// dangling pointer case 3: multiple pointers pointing to the same memory location and one of them is deleted.
std::cout << std::endl;
std::cout << "Case3 : multiple pointers pointing to the same memory location and one of them is deleted " <<  std::endl;
int* p_number3{new int{83}};
int *p_number4{p_number3};

std::cout << "p_number3(before delete): " << *p_number3 << std::endl;
std::cout << "p_number4(before delete): " << *p_number4 << std::endl;
delete	p_number3;
std::cout << "p_number4(after delete): " << *p_number4 << std::endl;//p_number4 is now a dangling pointer as it is pointing to the memory location that has been deallocated(deleted)

//soulution to case 3: set the pointer to nullptr after deleting it
int* p_number8{new int{382}};
int *p_number9{p_number8};
std::cout << "p_number8(before delete): " << *p_number8 << std::endl;
if(!(p_number8==nullptr)){ //only use slave pointer if the master pointer is not a dangling pointer
	std::cout << "p_number9(before delete): " << *p_number9 << std::endl;
}
delete p_number8;
p_number8 = nullptr;
if(p_number8!=nullptr){
	std::cout << "p_number9: " << *p_number9 << std::endl;
}
else{
	std::cout << "warning :Trying to use an invalid pointer or p_number8 is a dangling pointer" << std::endl;
}

}