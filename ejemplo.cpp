#include <iostream>
#include <cstdlib>

int main (int arg, char **argv)
{
  int a= std::atoi(argv[1]);
  a= 2*a;
  
  std::cout << "Hola mundo\n";
  std::cout <<"a: " <<a<< std::endl; 


  return 0;
}
