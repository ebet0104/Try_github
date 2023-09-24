#include <iostream>
#include <armadillo>

int main()
{
  std::cout << "Hello, world!" << std::endl;
  arma::mat A = arma::mat(2, 2);

  A.print();

  return 0;
}
