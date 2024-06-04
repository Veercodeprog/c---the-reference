#include <iostream>
int main()
{
int number1 = 15; //decimal
int number2 = 0b1111; //binary
int number3 = 0xF; //hexadecimal
int number4 = 017; //octal

std::cout << number1 << std::endl;
std::cout << number2 << std::endl;
std::cout << number3 << std::endl;
std::cout << number4 << std::endl;
int bike_count { 15 } ;

    std::cout << "Bike count : " << bike_count << std::endl;

int elephant_count ;
    int lion_count {};
    int dog_count {10} ;
    int cat_count {15} ;
    int domesticated_animals {dog_count + cat_count};

//    int new_number { doesnt exist } ;
    //
    std::cout << "Elephant count : " << elephant_count << std::endl;
        std::cout << "lion count : " << lion_count << std::endl;
            std::cout << "dog count : " << dog_count << std::endl;
                std::cout << "cat count : " << cat_count << std::endl;
                    std::cout << "domesticated animals : " << domesticated_animals << std::endl;



    signed int value1 {10 };
    signed int value2 { -300 };

    std::cout << "value1 is " << value1 << std::endl;
    std::cout << "value2 is " << value2 << std::endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2): " << sizeof(value2) << std::endl;


    unsigned int value3 { 4 };
  //    unsigned int value4 { -5 }; // this will cause an error , compiler error 

short short_var { -32768 };
short int short_int { 455 };
    signed short signed_short { 122 };
    signed short int signed_short_int { -456 };
    unsigned short int unsigned_short_int { 456 };


    int int_var { 55 };

signed signed_var { 66 };

    signed int signed_int { 77 };
    unsigned int unsigned_int { 77 };

    long long_var { 88 };
    long int long_int { 99 };
    signed long signed_long { 100 };
    signed long int signed_long_int { 101 };
    unsigned long int  unsigned_long { 102 };

    long long long_long { 888 } ;
    long long int long_long_int { 999 };
    signed long long signed_long_long { 444 };
    signed long long int signed_long_long_int { 1234 };
    unsigned long long int unsigned_long_long_int { 1234 };


    std::cout << "short variable: " << short_var << " , size : " << sizeof (short) << " bytes " << std::endl;
    std::cout << " Short Int  " << short_int << " , size : " << sizeof ( short int) << " bytes " << std::endl;





    std::cout << "Signed short : " << signed_short << " , size : " << sizeof(signed short) << " bytes " << std::endl; 

    std::cout << "Signed short int : " << signed_short_int << " , size : " << sizeof(signed short int) << " bytes " << std::endl;

    std::cout <<  "--------------------" << std::endl;


    std::cout << "Long variable : " << long_var << " , size : " << sizeof(long) << " bytes " << std::endl;

    std::cout << "Long int : " << long_int << " , size : " << sizeof(long int) << " bytes " << std::endl;

 std::cout << "Signed long : " << signed_long << " , size : " << sizeof(signed long) << " bytes " << std::endl;
    
std::cout << "Signed long int : " << signed_long_int << " , size : " << sizeof(signed long int) << " bytes " << std::endl;

    std::cout << "Unsigned long int : " << unsigned_long << " , size : " << sizeof(unsigned long int) << " bytes " << std::endl;


float number1 { 1.1123456789f };

double number2 { 1.1123456789 };

long double number3 { 1.1123456789L };

float number4 { 1.1123456789 };

    number4 = number4+1;

    std::cout << "number4 is : " << number4 << std::endl;

    double number5 { 1.19240023 };
    double number6 { 1.92400023e8 };
    double number7 { 1.924e8 };
    double number8 { 0.0000000000000003498 };
    double number9 { 3.498e-11 };


    


std::cout << "sizeof float : " << sizeof(float) << std::endl;  
std::cout << "sizeof double : " << sizeof(double) << std::endl;
std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20) ;

    std::cout << "number1 : " << number1 << std::endl;

    std::cout << "number2 : " << number2 << std::endl;i

    std::cout << "number3 : " << number3 << std::endl;


    
    return 0;

}



