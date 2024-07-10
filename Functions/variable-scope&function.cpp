/*
 * If a parameter is declared const then that parameter cannot be changed inside
 * the funciton
 *
 * references are just another way of same variable two names.
 *
 * REference decalrations can also be used for return values .For example
 * Because the version of biggest returns a reference, it can be used on the
left side of an assignment operation (=) to change its value. But suppose you
don't want that to happen. You can accomplish this by returning a const
reference. const int &biggest(int array[], int n_elements);
 */

#include <iostream>
const int ARRAY_SIZE = 5;
int itemarray[ARRAY_SIZE] = {1, 2, 500, 4, 5};

int &biggest(void) {
  int index;
  int biggest;
  biggest = 0;
  for (index = 1; index < ARRAY_SIZE; index++) {
    if (itemarray[index] > itemarray[biggest])
      biggest = index;
  }
  return (itemarray[biggest]);
}

int main() {
  std::cout << "The biggest item is " << biggest() << std::endl;
  int &biggestitem = biggest();
  biggestitem++;
  std::cout << "The biggest item is " << biggest() << std::endl;
  std::cout << "The biggest item is " << itemarray[2] << std::endl;
  return 0;
}
