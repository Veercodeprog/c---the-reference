#include <iostream>

int main(){
char message[5]{'h','e','l','l','o'};
std::cout << "message: " << message << std::endl;
 for (auto c : message){
        std::cout << c;
    }

// if a character array is not null terminated, then the output will be garbage
// if a character array is null terminated, then the output will be the c-string
char message1[6]{'h','e','l','l','o','\0'};
std::cout << "message1: " << message1 << std::endl;
 for (auto c : message1){
		std::cout << c;
	}

char message2[6]{'h','e','l','l','o','\0'};
std::cout << "size of message2: " << sizeof(message2) << std::endl;

char message3[]{"hello"};
std::cout << "size of message3: " << sizeof(message3) << std::endl;

int numbers [5]{1,2,3,4,5};
std::cout << "numbers: " << numbers << std::endl;

return 0;
}