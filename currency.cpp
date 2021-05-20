#include <iostream>

//A program to convert number of Pesos, Reais and Soles to US Dollars
int main() {
  double pesos, reais, soles, dollars;
  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;
//Conversion rates
//Pesos to USD: 0.00027
//Reais to USD: 0.19
//Soles to USD: 0.27

//Converting
dollars = (0.0027*pesos)+(0.19*reais)+(0.27*soles);

//Return
std::cout << "You have $" << dollars <<  " US Dollars. Happy spending! \n";

return 0;
  
}
