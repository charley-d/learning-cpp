#include <iostream>
#include <cstdlib>

int main() {
//Your future is here

//Standard intro
std::cout << "MAGIC 8-BALL:\n";

//Set the seed
srand(time(NULL));
//Random number
int answer= std::rand() % 10;


//Program

if(answer==0) {
  std::cout << "It is certain.\n";}
else if(answer==1) {
  std::cout << "Don't count on it.\n";
}
else if(answer==2){
  std::cout << "Cannot predict now.\n";
}
else if(answer==3){
  std::cout << "Yes.\n";
}
else if(answer==4){
  std::cout << "As I see it, yes.\n";
}
else if(answer==5){
  std::cout << "Without a doubt.\n";
}
else if(answer==6){
  std::cout << "Concentrate and ask again.\n";
}
else if(answer==7){
  std::cout << "My reply is no.\n";
}
else if(answer==8){
  std::cout << "Better not tell you now.\n";
}
else if(answer==9){
  std::cout << "Ask again later.\n";
}
else {
  std::cout << "Very doubtful.\n";}
}

