// 1.)output parameters should be passed in such a way that you can modify the
// arguments from inside the functin.options are passing by reference or passing
// by pointer.
//
// 2.)input parameters shouldn't be modified inside the function. options are
// passing by value or you enforce modification restriction using const keyword.
// options are passing by const rererence , passing by pointer to const or even
// passing by const pointer to const.
//

#include <iostream>

// we can pass input parameters by value(int input1, int input2 ,std::string
// &output ) but it is not efficient for large objects as it involves copying
// the object. passing by const rererence , passing by pointer to const or even
//  passing by const pointer to const.
void max_str(const std::string &input1, const std::string input2,
             std::string &output) {
  if (input1 > input2) {
    output = input1;
  } else {
    output = input2;
  }
}

int main() {
  std::string str1 = "Alabama";
  std::string str2 = "Belluve";
  std::string result;
  max_str(str1, str2, result);
  std::cout << "max_str: " << result << std::endl;

  return 0;
}
