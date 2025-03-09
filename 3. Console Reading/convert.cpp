#include <iostream>

using namespace std;

void convertToCelsius() {
  double fahrenheit;
  cout << "Fahrenheit: ";
  cin >> fahrenheit;
  double celsius = (fahrenheit - 32) / 1.8; // or (fahrenheit - 32) * (5 / 9)
  cout << "Celsius: " << celsius << endl;
}

int main() {
  
  convertToCelsius();
  
  return 0;
}