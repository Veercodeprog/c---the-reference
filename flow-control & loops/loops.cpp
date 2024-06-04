/*
loops in c++:
for loop
while loop
do while loop
Range based for loop
*/

#include <iostream>
int main(){
/*
size_t is an unsigned integral type
size_t is used to represent the size of objects in bytes
*/

for (size_t i {}; i < 10; i++){

std::cout << "i: " << i << std::endl;
}
const unsigned int COUNT {10};
unsigned int j {0};
while(j < COUNT){
std::cout << "j: " << j << std::endl;
j++;
}
const unsigned int COUNT1 {10};
unsigned int k {0};

do{
std::cout << "k: " << k << std::endl;
++k;
}while(k < COUNT1);
return 0;
}