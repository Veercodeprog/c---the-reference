/// we mean ram here when we are using memory term
//if we open a program in memory map we can see the memory layout of the program
/*
virtual memory:
a memory map is a file that lists the segments of a program that are loaded into memory by the loader. each program is abstracted into a process, and each process has access to the memory range 0 ~ (2^n)-1 where n is 32 on 32 bit systems and 64 on 64 bit systems.

Memory management unit (MMU):
The MMU is a hardware unit that maps virtual memory to physical memory. The MMU is responsible for translating virtual memory addresses to physical memory addresses. The MMU uses a page table to map virtual memory to physical memory.

the memory map is a standard format defined by the os. all programs written for that os must conform to it.It is usually divided into some sections:
1. text section: this is where the compiled code of the program is stored. this is read only and is shared among all processes that are running the same program.
2. data section: this is where the global and static variables are stored. this is divided into two parts: initialized data and uninitialized data.

3. heap(important): this is where the dynamic memory allocation happens. this is where the memory is allocated using new or malloc.
4. stack(important): this is where the local variables are stored. this is where the memory is allocated for the function calls and the return addresses are stored.
5. environment variables: this is where the environment variables are stored.
6. command line arguments: this is where the command line arguments are stored.
7. shared libraries: this is where the shared libraries are stored.
8. kernel space: this is where the kernel is stored. this is where the kernel code is stored.
9. user space: this is where the user code is stored. this is where the user code is stored.
10. system space: this is where the system code is stored. this is where the system code is stored.
1

*/

//dynamic memory allocation: so far we've been only using memory allocated in the stack. we are going to see how one can allocate memory from the heap, and some of the differnces between the two.

//difference between stack and heap:
/*
stack:
1. stack is a memory region that is used to store local variables and function call information.
2. stack is a fixed size memory region.
3. stack is a fast memory region.
4. stack is a contiguous memory region.
5. stack is a last in first out memory region.
6. stack is a thread specific memory region.
7. the developer isn't responsible for managing the stack memory.
8. Lifetime of the stack memory is limited to the scope of the function.




heap:
1. heap is a memory region that is used to store dynamic memory allocations.
2. heap is a variable size memory region.
3. heap is a slow memory region.
4. heap is a non contiguous memory region.
5. heap is a first in first out memory region.
6. heap is a process specific memory region.
7. the developer is responsible for managing the heap memory.
8. Lifetime of the heap memory is controlled through the new and delete operators in c++.


*/

/*dynamic memory allocation in c++: 
Dynamically allocate memory at run time  and make a pointer point to it.
*/

#include <iostream>

int main(){
int* p_number4{nullptr};
p_number4 = new int; //allocate memory for a single integer on the heap
                     // this memeory belongs to our program from now on.The system
                     // can't use it for anything else, until we return it.
                    // After this line executes we have a valid memory location or  
                    // address allocated to p_number4.The size of the memory 
                    // allocated will be the size of the type of the pointer.


*p_number4 = 77; // assign a value to the dynamically allocated memory location
std::cout << std::endl;
std::cout << "Dynamic allocating memory : " << std::endl;
std::cout << "*p_number4: " << *p_number4 << std::endl;
std::cout << "p_number4: " << p_number4 << std::endl;
                    
//local variblaes are stored in the stack memory and die automatically when the 
//function scope ends where they are declared/defined.
//wheres dynamic memory is stored in the heap memory and we have to manually
//free the memory when we are done with it.and it is able to live beyond the
//scope of the function where it is declared/defined.

//releasing and resetting
int* p_number5{nullptr};
p_number5 = new int;

delete p_number5; //free the memory allocated on the heap
p_number5 = nullptr; //reset the pointer to nullptr

// it is also possible to inititalize the pointer with a valid address up on 
// declaration and not with a nullptr

int* p_number6 = new int{}; ///memory location contains junk value
int *p_number7 = new int{100}; //memory location contains 100
int *p_number8 = new int(200); //memory location contains 200

std::cout << std::endl;
std::cout << "Dynamic allocating memory with inititalization : " << std
::endl;
std::cout << "p_number6: " << p_number6 << std::endl;
std::cout << "*p_number6: " << *p_number6 << std::endl; //junk value
std::cout << "p_number7: " << p_number7 << std::endl;
std::cout << "*p_number7: " << *p_number7 << std::endl;
std::cout << "p_number8: " << p_number8 << std::endl;
std::cout << "*p_number8: " << *p_number8 << std::endl;

delete p_number6;
p_number6 = nullptr;
delete p_number7;
p_number7 = nullptr;
delete p_number8;
p_number8 = nullptr;

              
return 0;
}