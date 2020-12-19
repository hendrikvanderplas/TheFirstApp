#include <iostream>
#include <string>
#include "headers.h"

int a = 1;
int b = 2;

void log(
  std::string(log_string))
{
  std::cout << log_string << std::endl;
};

int main() {
  
  int result = a + b;
  
  std::cout << "The result: " << result << std::endl;
  log("This is a string included into a log");
};