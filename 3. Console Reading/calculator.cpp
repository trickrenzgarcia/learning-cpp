#include <iostream>
#include <stdexcept>

using namespace std;

int calculate(int a, int b, char op) {
  switch (op) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      return a / b;
    default:
      throw invalid_argument("(Err_op)");
  }
}

int main()
{
  int a, b;
  char op;
  try {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;
  
    cout << "Result: " << a << op << b << " = " << calculate(a, b, op) << endl;
  } catch (const invalid_argument &e) {
    cout << e.what() << endl;
  }
  return 0;
}