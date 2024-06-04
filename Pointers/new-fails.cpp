/*
in rare cases new can fail to allocate memory and return a null pointer.
*/

#include <iostream>
int main(){
//int* lots_of_ints1{ new int [1000000000000000000]};//may giue a warning or error 
                                                  //about the overflow (exceeding 
  												  //the size of int)

/*
huge loop to consume memory and exhaust the memory caoaacity of the system.
when new fails your program is going to forcefully terminate.

*/
// for (size_t i{}; i< 10000000; ++i){

// int* lots_of_ints2{new int [10000000]};
// }

/*
we can handle this problem by:
1. throught the exception mechanism i.e. using try-catch block
2. using std::nothrow keyword
*/

//using try-catch block
// for (size_t i{0}; i< 10000000; ++i){
// try{
// int* lots_of_ints2{new int [10000000]};
// }
// catch(std::exception& ex){
// std::cout << "Something went wrong: " << ex.what() << std::endl;
// }
// }

//using std::nothrow keyword
for (size_t i{}; i< 10000000; ++i){

int* lots_of_ints4{new (std::nothrow) int [1000000000]};
if(lots_of_ints4 == nullptr){
std::cout<< "Memory allocation failed" << std::endl;
}
else{
std::cout<< "Memory allocation successful" << std::endl;
}
}

return 0;
}