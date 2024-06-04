/*
arrays in c++: arrays are used to store multiple values in a single variable
In memory, arrays are stored in contiguous memory locations i.e. one after another.
arrays has fixed size i.e. boundary checking is not done by the compiler
reading outside of bounds of your array is allowed and can lead to undefined (bad) behavior

arrays store elements of same type 
*/

#include <iostream>

int main(){
int scores[10];  // an array of 10 integers	
double salaries[3] {344.334, 555.445, 3242.55}; // an array of 20 doubles

// we can also omit the size of the array at declaration time
int class_size[] {10, 20, 30, 40, 50}; // an array of 5 integers

for (auto i : class_size){
std::cout << "i: " << i << std::endl;
}
for (size_t j {}; j < std::size(salaries); j++){ // std::size() is a c++17 feature
	/* code */
std::cout << "salaries[" << j << "] : " << salaries[j] << std::endl;
}
size_t count {sizeof(class_size)/sizeof(class_size[0])};
std::cout << sizeof(class_size) << std::endl; //size_of is used for size in memory
std::cout << sizeof(class_size[0]) << std::endl;

std::cout << "count: " << count << std::endl;

const int multiplier[] {22,30,25}; //constant arrays cannot be modified

std::cout << "size of scores: " << sizeof(scores) << std::endl;
std::cout << "scores[0] " << scores[0] << std::endl;
std::cout << "scores[1] " << scores[1] << std::endl;
std::cout << "scores[9] " << scores[9] << std::endl;

int scores1[] {2,5,8,2,5,6,9};
int sum{0};

for (int element: scores1 )
{
	/* code */
sum += element;
}
std::cout << "Score sum : " << sum << std::endl;


return 0;
}
