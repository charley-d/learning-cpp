#include <iostream>

int main() {

//Find out Earth weight
int earth_weight, planet_num, earth_mass;

  std::cout << "Hey Little Mac.\n";
  std::cout << "What's your Earth weight bro? In kg please my G.\n";
  std::cin >> earth_weight;
  std::cout << "Gnarly. And what's the number of the planet you want to fight on? I have information for the following planets.\n";
  std::cout << "Mercury (1), Venus (2), Mars (3), Jupiter (4), Saturn (5), Uranus (6) and Neptune (7).\n";
  std::cin >> planet_num;

earth_mass = earth_weight/9.81;
//Compute weight on destination planet

if(planet_num == 1) {
  std::cout << "You chose Mercury. Your weight on this planet would be: " << (earth_mass*0.38) << "kg.\n";
}
else if (planet_num == 2) {
  std::cout << "You chose Venus. Your weight on this planet would be: " << (earth_mass*0.91) << "kg.\n";
}
else if (planet_num == 3) {
  std::cout << "You chose Mars. Your weight on this planet would be: " << (earth_mass*0.38) << "kg.\n";
}
else if (planet_num == 4) {
  std::cout << "You chose Jupiter. Your weight on this planet would be: " << (earth_mass*2.34) << "kg.\n";
}
else if (planet_num == 5) {
  std::cout << "You chose Saturn. Your weight on this planet would be: " << (earth_mass*1.06) << "kg.\n";
}
else if (planet_num == 6) {
  std::cout << "You chose Uranus. Your weight on this planet would be: " << (earth_mass*0.92) << "kg.\n";
}
else if (planet_num == 7) {
  std::cout << "You chose Neptune. Your weight on this planet would be: " << (earth_mass*1.19) << "kg.\n";
}
else {
  std::cout << "You chose an unknown planet. Do better!\n";
}

std::cout << "Good luck with the fight!!\n"; 
  
  
  

  
}
