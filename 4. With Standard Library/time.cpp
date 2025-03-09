#include <iostream>
#include <ctime>

int main()
{
  time_t now = time(0);
  char* dt = ctime(&now);
  std::cout << "Time in unix format: " << now << std::endl;
  std::cout << "The local date and time is: " << dt << std::endl;
  return 0;
}