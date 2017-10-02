#include<iostream>

int main(int argc, char* argv[]) {
  // This is invalid, there is a ; after each line but no std::cout at start; either both or none are needed (except for final ;).
  std::cout << "the sum of " << v1;
            << " and " << v2;
            << " is " << v1 + v2 << std::endl;
  return 0;
}