#include<iostream>

int main(int argc, char* argv[]) {
  // valid
  std::cout << "/*";
  // valid
  std::cout << "*/";
  // invalid
//  std::cout << /* "*/" */;
  // valid
  std::cout << /* "*/" /* "/* " */;
  return 0;
}