// special methods or functions in a class that are automatically called when an
// instance of a class destroyed are called destructors. destructors are used to
// release resources or dynaic memory  that the object may have acquired during
// its lifetime.
//
// the destructors are called when:-
// 1.) when a local stack object goes out of scope.(dies)
// eg: when the main function ends, the local stack objects are destroyed.
// 2.) when a heap object is released or deleted using the delete keyword.
//
// the destructors are also called in weird scenarios like
// 1.) when an object is passed by value to a function and the function ends.
// eg : void some_function(Cylinder c1) { // do something with c1 }
//
// 2.) when an object is returned by value from a function and the function
// ends. eg : Cylinder some_function() { Cylinder c1; return c1; }
//
#include <iostream>
#include <string_view>
class Dog {
public:
  Dog() = default;
  Dog(std::string_view name_param, std::string_view breed_param,
      int age_param); // std::string_view is a lightweight, read-only view of
                      // a string. It's useful for passing strings to
                      // functions without incurring the overhead of copying
                      // the string.
  ~Dog();             // destructor, not possible to pass parameters to
                      // destructors.

private:
  std::string name;
  std::string breed;
  int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param,
         int age_param) {
  name = name_param;
  breed = breed_param;
  p_age = new int;
  *p_age = age_param;
  std::cout << "Constructor called for " << name << std::endl;
}

Dog::~Dog() {
  delete p_age;
  std::cout << "Destructor called for " << name << std::endl;
}

void some_func() {
  Dog my_dog("Fluffy", "Golden Retriever", 5);
} // when this function ends, the destructor is called for my_dog automatically
void some_func2() {
  Dog *p_dog =
      new Dog("Fluffy 2 ", "Golden Retriever 2",
              5); // destructor is not called
                  // as we are using the new keyword, we have to manually or
                  // explictly delete the object using the delete keyword in
                  // case of allocating memory using new keyword.
  delete p_dog;   // destructor is called here, when we delete the object using
                  // delete keyword
}
int main() {
  //  Dog dog1("Fluffly", "Golden Retriever", 5);  // destructor is called
  //  after done gets printed

  some_func();  // destructor is called Before done gets printed
                //  std::cout << my_dog.name << std::endl; // this will give an
  some_func2(); // destructor is not called
  std::cout << "done" << std::endl;
  return 0;
}
