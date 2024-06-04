/*
dynamic arrays or dynamically allocated arrays are arrays that are allocated on the heap memory with the new keyword. can also use std::nothrow version of new to allocate memory for an array. 
*/

#include <iostream>
int main(){
size_t size {10};
/*
different ways to declare an array dynamically and how they are initialized
*/

double* p_salaries{new double[size]}; //allocate memory for an array of 10 doubles  
								 	  //conatins garbage values
int* p_students{ new(std::nothrow) int[size]{}}; //allocate memory for an array of 
												 //10 integers and initialize them 
												// to 0
double* p_scores{new(std::nothrow) double[size]{1,2,3,4,5}};
if(p_scores){

std::cout << "size of scores (it's a regular  pointer) : " << sizeof(p_scores) << std::endl;

std::cout << "successfully allocated memory for p_scores" << std::endl;

for(size_t i{}; i < size; i++){
	std::cout << "p_scores[" << i << "] : " << p_scores[i]<<" : " << *(p_scores+i) << std::endl;
}
}

delete [] p_salaries;
p_salaries = nullptr;
delete [] p_students;
p_students = nullptr;
delete [] p_scores;
p_scores = nullptr;
/*
static arrays vs dynamic arrays:
1. static arrays are allocated on the stack memory and have fixed size
2. dynamic arrays are allocated on the heap memory and have variable size
3. static arrays are deallocated when they go out of scope
4. dynamic arrays are deallocated using the delete keyword
5.std::size() can be used to get the size of a static array
6. sizeof() can be used to get the size of a dynamic array
*/

}