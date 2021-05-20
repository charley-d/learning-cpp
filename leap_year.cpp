#include <iostream>

int main() {
  //Initialize variables
  int year;
  
  //Input year
  std::cout << "Choose a year: \n";
  std::cin >> year;

  //Check if year is a leap year
if (year>=1000){
  if ((year %4)==0) {
    if (((year % 100)==0) && ((year % 400)!=0)){
      std::cout << "That's not a leap year.\n";
    }
    else{
      std::cout << "That's a leap year.\n";
    }
  }
  else {
    std::cout << "That's not a leap year.\n";
  }
}
else {
  std::cout << "Invalid year.\n";
}
}
