
#include <iostream>
#include <string>

std::string say_hello();

int main(){
  std::cout << say_hello() << std::endl;
  return 0;
}

std::string say_hello(){
  std::string hello {"Hello World!"};
  return hello;
}

