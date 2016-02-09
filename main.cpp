#include <libfoo/libfoo.hpp>
#include <libbar/libbar.hpp>

#include <iostream>

int main(int argc, char* argv[])
{
  std::cout << hello() << ", " << world() << "!" << std::endl;
  return 0;
}
