#include <iostream>

int main() {
  // H = human, D = dog

  //Initialize dog's age
  int dog_age = 3; 
  //First 2 D years are equal to 21 H years
  int early_years = 21; 
  //Each following D year counts as 4 H years
  int later_years = (dog_age-2)*4;
  //Find total age in H years
  int human_years = early_years + later_years;
  //Display dog's name and age in H years
  std::cout << "My name is Milo! Ruff ruff, I am " << human_years << " years old in human years.\n";

  return 0;
}
