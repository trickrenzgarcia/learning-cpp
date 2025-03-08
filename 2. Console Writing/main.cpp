#include<iostream>
#include<stdexcept>

using namespace std;

int main() {
  double sales = 95000;
  double stateTax = sales * 0.04;
  double countyTax = sales * 0.02;
  double totalSales = sales + stateTax + countyTax;
  
  cout << "Sales: " << sales << endl;
  cout << "State Tax: " << stateTax << endl;
  cout << "County Tax: " << countyTax << endl;
  cout << "Net Sales: " << totalSales << endl;
  
  return 0;
}