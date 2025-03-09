#include <iostream>

int main()
{
  short guess {}; // User's guess
  const short min = 1; // Minimum value of the die
  const short max = 6; // Maximum value of the die
  
  srand(time(0)); // Seed the random number generator

  short die = rand() % (max - min + 1) + min; // Random picker between 1-6
  
  std::cout << "Enter your guess between 1-6: ";
  std::cin >> guess; // User's guess

  std::string result = (die == guess) ? "win" : "lose"; // Check if the user's guess is correct

  std::cout << "Die: " << die << std::endl;
  std::cout << "You " << result << std::endl;
  
  return 0;
}