/* This program is a game of rock, paper, scissors. The user will randomly select one of these options, and so will the computer. A winner will then be determined. */

#include <iostream>
#include <stdlib.h>

int main() {

//Determine computer's choice

  srand (time(NULL));
  int computer = rand() %  6;
  int user = 0;

  //Prompt the user for their choice

  std::cout << "Rock, paper, scissors!\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
  std::cin >> user;

//Output computer's choice
std::cout << "The computer chose: ";
if(computer==1){
  std::cout << "Rock.\n";
}
else if(computer==2){
  std::cout << "Paper.\n";
}
else if(computer==3) {
  std::cout << "Scissors.\n";
}
else if(computer==4){
  std::cout << "Lizard.\n";
}
else{
std::cout << "Spock.\n";
}

//Determine winner

if(computer==user){
  std::cout << "Draw!\n";
}
else if(computer==1&&user==2){
  std::cout << "Paper covers rock. You win!\n";
}
else if(computer==1&&user==3){
  std::cout << "Rock crushes scissors. You lose!\n";
}
else if(computer==1&&user==4){
  std::cout << "Rock crushes lizard. You lose!n";
}
else if(computer==1&&user==5){
  std::cout << "Spock vaporises rock. You win!\n";
}
else if(computer==2&&user==1){
  std::cout << "Paper covers rock. You lose!\n";
}
else if(computer==2&&user==3){
  std::cout << "Scissors cut paper. You win!\n";
}
else if(computer==2&&user==4){
  std::cout << "Lizard eats paper. You win!\n";
}
else if(computer==2&&user==5){
  std::cout << "Paper disproves spock. You lose!\n";
}
else if(computer==3&&user==1){
  std::cout << "Rock crushes scissors. You win!\n";
}
else if(computer==3&&user==2){
  std::cout << "Scissors cut paper. You lose!\n";
}
else if(computer==3&&user==4){
  std::cout << "Scissors decapitate lizard. You lose!\n";
}
else if(computer==3&&user==5){
  std::cout << "Spock smashes scissors. You win!\n";
}
else if(computer==4&&user==1){
  std::cout << "Rock crushes lizard. You win!\n";
}
else if(computer==4&&user==2){
  std::cout << "Lizard eats paper. You lose!\n";
}
else if(computer==4&&user==3){
  std::cout << "Scissors decapitates lizard. You win!\n";
}
else if(computer==4&&user==5){
  std::cout << "Lizard poisons spock. You lose!\n";
}
else if(computer==5&&user==1){
  std::cout << "Spock vaporizes rock. You lose!\n";
}
else if(computer==5&&user==2){
  std::cout << "Paper disproves spock. You win!\n";
}
else if(computer==5&&user==3){
  std::cout << "Spock smashes scissors. You lose!\n";
}
else if(computer==5&&user==4){
  std::cout << "Lizard poisons spock. You win!\n";
}
else{
  std::cout << "Error.\n";
}



}

