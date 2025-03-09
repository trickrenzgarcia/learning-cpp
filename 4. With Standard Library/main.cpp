#include <iostream>
#include <cmath>
using namespace std;

const double PI = M_PI;

// Function to calculate the radius of a circle
double getRadius(double diameter)
{
  return diameter / 2;
}

// Function to calculate the area of a circle
double getArea(double radius)
{
  return PI * pow(radius, 2);
}

int main()
{
  cout << "Enter a diameter: ";
  double diameter;
  cin >> diameter;
  double radius = getRadius(diameter);
  double area = getArea(radius);
  cout << "Radius: " << radius << endl;
  cout << "Area: " << area << endl;
  return 0;
}