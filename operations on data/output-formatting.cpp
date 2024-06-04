/*
for formatiing the output of the program we can use the following functions:
1. setw() : set width
2. setfill() : set fill character
3. setprecision() : set precision
4. setbase() : set base
5. setiosflags() : set ios flags
6. resetiosflags() : reset ios flags
8. setf() : set format flags
9. unsetf() : unset format flags
10. endl : end line
11. flush : flush the output buffer and send the output to the console without waiting for the buffer to be full.
12. ws : white space
13. dec : decimal
14. oct : octal
15. hex : hexadecimal
16. showbase : show base
17. showpoint : show point
18. showpos : show positive
19. uppercase : upper case
20. nouppercase : no upper case
21. fixed : fixed
22. scientific : scientific
23. internal : internal
24. left : left
25. right : right
26. boolalpha : bool alpha
27. noboolalpha : no bool alpha
28. unitbuf : unit buffer
29. nounitbuf : no unit buffer
30. skipws : skip white space
31. noskipws : no skip white space

*/

#include <iostream>
#include <iomanip>  // Include this header for std::setw


int main(){

std::cout << "This is a nice message...." << std::endl << std::flush;

std::cout << "Formatted Table :" << std::endl;
std::cout << "--------------------------------" << std::endl;
std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Lastname" << std::setw(10) << "Age" << std::endl;
std::cout << std::setw(10) << "John" << std::setw(10) << "Doe" << std::setw(10) << "25" << std::endl;
std::cout << std::setw(10) << "Sam" << std::setw(10) << "Smith" << std::setw(10) << "30" << std::endl;
std::cout << std::setw(10) << "Tom" << std::setw(10) << "Brown" << std::setw(10) << "35" << std::endl;
std::cout << "--------------------------------" << std::endl;

std::cout << std::right;
std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Lastname" << std::setw(10) << "Age" << std::endl;
std::cout << std::internal << std::setw(10) << "John" << std::setw(10) << "Doe" << std::setw(10) << -25 << std::endl;
std::cout << std::setfill('-') << std::setw(10) << "Sam" << std::setw(10) << "Smith" << std::setw(10) << "30" << std::endl;
std::cout << std::setw(10) << "Tom" << std::setw(10) << "Brown" << std::setw(10) << "35" << std::endl;
std::cout << "--------------------------------" << std::endl;

bool condition = true;
bool other_condition = false;
std::cout << "condition: " << condition << std::endl;
std::cout << std::boolalpha << "Condition: " << condition << std::endl;

int pos_int {717171};
int neg_int {-47347};
double double_num {3.14159};
std::cout << std::endl;
std::cout << "pos_int(dec): " << std::dec << pos_int << std::endl;
std::cout << "neg_int(dec): " << std::dec << neg_int << std::endl;
std::cout << "pos_int(oct): " << std::oct << pos_int << std::endl;
std::cout << "neg_int(oct): " << std::oct << neg_int << std::endl;
std::cout << "pos_int(hex): " << std::hex << pos_int << std::endl;
std::cout << "neg_int(hex): " << std::hex << neg_int << std::endl;
std::cout << "double_num(dec): " << std::dec << double_num << std::endl;
std::cout << "double_num(oct): " << std::oct << double_num << std::endl;
std::cout << "double_num(hex): " << std::hex << double_num << std::endl;
std::cout << "double_num: " << std::fixed << double_num << std::endl;
std::cout << "double_num: " << std::scientific << double_num << std::endl;

std::cout << std::endl;
std::cout << "pos_int(no showbase): " << std::endl;
std::cout << "pos_int(dec): " << std::dec << pos_int << std::endl;
std::cout << "pos_int(hex): " << std::dec << pos_int << std::endl;
std::cout << "pos_int(oct): " << std::dec << pos_int << std::endl;
std::cout << "pos_int(showbase): " << std::endl;
std::cout << std::showbase;
std::cout << "pos_int(dec): " << std::dec << pos_int << std::endl;
std::cout << "pos_int(hex): " << std::dec << pos_int << std::endl;
std::cout << "pos_int(oct): " << std::dec << pos_int << std::endl;



	return 0;
}