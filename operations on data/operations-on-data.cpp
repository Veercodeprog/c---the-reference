/* we can do various operations on the data in c++ like:-
* add, subtract, multiply, divide, modulus, increment, decrement,formatting,built-in-utilities etc.

precedence and associativity of operators in c++:-
precedence:- precedence of an operator determines the order of evaluation of operators in an expression.
associativity:- associativity of an operator determines the order or direction	 of evaluation of operators of the same precedence in an expression.
1. () [] -> . ::  (left to right)
2. ! ~ ++ -- + - * & (type) sizeof (right to left)
co_await (right to left)
new new[] delete delete[] (right to left)
3. * / % (left to right)
4. + - (left to right)
5. << >> (left to right)
6. < <= > >= (left to right)
7. == != (left to right)
8. & (left to right)
9. ^ (left to right)
10. | (left to right)
11. && (left to right)
12. || (left to right)
13. ?: (right to left)
throw (right to left)
co_yield (right to left)
14. = += -= *= /= %= &= ^= |= <<= >>= (right to left)
15. , (left to right)
*/ 

#include <iostream>

int main() {

int value =5;
std::cout << "value: " << value++ << std::endl; // value: 5
std::cout << "value: " << value << std::endl; // value: 6

int value2 = 5;
std::cout << "value2: " << ++value2 << std::endl; // value2: 6
    return 0;
}