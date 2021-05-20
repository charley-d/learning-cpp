#include <iostream>
#include <cmath>

int main() {
  double a, b, c;

  std::cout << "Enter a: \n";
  std::cin >> a;
  std::cout <<"Now enter b: \n";
  std::cin >> b;
  std::cout << "Finally, enter c: \n";
  std::cin >> c;

  double root1, root2;

  root1 = (-b+std::sqrt((b*b)-4*a*c))/(2*a);
  root2 = (-b-std::sqrt((b*b)-4*a*c))/(2*a);

  std::cout << "The first root is " << root1 << ". The second root is " << root2 <<". Bye!\n";

return 0;

}
