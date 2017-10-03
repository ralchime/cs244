#include "sample.h"
using namespace exercises;

int main()
{
  Exercise ex; //Exercise object
  ex.x = 3; //x field of object ex
  ex.y = "Hello"; //y field of object ex
  ex.print(); //print () method of object ex
  std::cout << "\n";
  return 0;
}
