/*
flow control in c++
if else
switch case
ternary operator
*/


#include <iostream>

const int pen{ 1 };
const int pencil{ 2 };

/*
or we can use enum
enum Tool{
pen = 1,
pencil = 2
};

*/

int main(){

int tool{ pen };

switch(tool){
case pen: {
std::cout << "pen is selected" << std::endl;
}
break;
case pencil: {
std::cout << "pencil is selected" << std::endl;
}
break;
default: {
std::cout << "no tool is selected" << std::endl;
}
break;
}


/* 
ternary operator: 
*/
bool fast = true;
int speed {fast? 300 : 100};
std::cout << "speed: " << speed << std::endl;

int a{10};
int b{20};
// int result{};
auto result = (a > b)? a : 22.5;
std::cout << "result: " << result << std::endl;
return 0;
}