/*
when we loose access to memory that is dynamically allocated, it is called a memory leak.
*/

#include <iostream>

int main(){

//case 1
int* p_number{new int{67}}; //points to some address , lets call it address1

//should delete and reset

int number{55}; //lives at address2(stack variable)

p_number = &number; //p_number now points to the address of number i.e. address2
                    //but address1 is still allocated and we have lost access to it
					//this is a memory leak

//case 2: double allocation

int* p_number1{new int{55}}; //points to some address , lets call it address3

p_number1 = new int{77}; //p_number1 now points to the address of the new allocation
						//address3 is still allocated and we have lost access to it
						//this is a memory leak i.e. memory with int{55} is leaked


//case 3: nested scope

{
 int* p_number2{new int{88}}; 
}
//memory with int{88} is leaked

return 0;
}