/*
math functions in c++:-
1. abs() : returns the absolute value of a number.
2. fabs() : returns the absolute value of a floating point number.
3. sqrt() : returns the square root of a number.
4. cbrt() : returns the cube root of a number.
5. hypot() : returns the hypotenuse of a right-angled triangle.
6. pow() : returns the power of a number.
7. exp() : returns the exponential value of a number.
8. log() : returns the natural logarithm of a number.
9. log10() : returns the base 10 logarithm of a number.
10. log2() : returns the base 2 logarithm of a number.
11. ceil() : returns the smallest integer greater than or equal to a number.
12. floor() : returns the largest integer less than or equal to a number.
13. round() : returns the nearest integer of a number.
14. trunc() : returns the integer part of a number.
15. fmod() : returns the remainder of a division of two numbers.
16. remainder() : returns the remainder of a division of two numbers.
17. copysign() : returns the first number with the sign of the second number.
18. nan() : returns a quiet NaN.
19. isnan() : returns true if the number is NaN.
20. isinf() : returns true if the number is infinite.
21. isfinite() : returns true if the number is finite.
22. isnormal() : returns true if the number is normal.
23. signbit() : returns true if the sign bit is set.
24. nextafter() : returns the next representable value of a number.
25. nexttoward() : returns the next representable value of a number.
26. fdim() : returns the positive difference between two numbers.
27. fmax() : returns the maximum of two numbers.
28. fmin() : returns the minimum of two numbers.
29. fma() : returns the fused multiply-add of three numbers.
30. round() : returns the nearest integer of a number.
31. sin() : returns the sine of a number.
32. cos() : returns the cosine of a number.
33. tan() : returns the tangent of a number.
*/

#include <iostream>
#include <cmath> // Include this header for math functions

int main(){

double weight {10.05};

std::cout << "weight rounded to floor is: " << floor(weight) << std::endl;

double height {-8000};
std::cout << "height rounded to ceil is: " << ceil(height) << std::endl;
std::cout << "absolute value of height  is: " << abs(height) << std::endl;
std::cout << "3 to the power of 4 is: " << pow(3,4) << std::endl;
std::cout << "To get 1000 , you'd need  to elevate 10 to the power of :" << log10(1000) << std::endl;
return 0;
}