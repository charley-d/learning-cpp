/* This program is a game of rock, paper, scissors. The user will randomly select one of these options, and so will the computer. A winner will then be determined. */

#include <iostream>
#include <stdlib.h>

int main() {

//Determine computer's choice

  srand (time(NULL));
  int computer = rand() %  3 + 1;
  int user = 0;

  //Prompt the user for their choice

  std::cout << "Rock, paper, scissors!\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cin >> user;

//Output computer's choice
std::cout << "The computer chose: ";
if(computer==1){
  std::cout << "Rock.\n";
}
else if(computer==2){
  std::cout << "Paper.\n";
}
else{
  std::cout << "Scissors.\n";
}

//Determine winner

if(computer==user){
  std::cout << "Draw!\n";
}
else if(computer==1&&user==2){
  std::cout << "You win!\n";
}
else if(computer==1&&user==3){
  std::cout << "You lose!\n";
}
else if(computer==2&&user==1){
  std::cout << "You lose!\n";
}
else if(computer==2&&user==3){
  std::cout << "You win!\n";
}
else if(computer==3&&user==1){
  std::cout << "You win!\n";
}
else if(computer==3&&user==2){
  std::cout << "You lose!\n";
}
else{
  std::cout << "Error.\n";
}



}

