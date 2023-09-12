#include <iostream>

using namespace std;

template <typename T>
class Calculator {
private:
  T num1, num2;

public:
  Calculator(T n1, T n2) {
    num1 = n1;
    num2 = n2;
  }

  T add() { return num1 + num2; }
  T subtract() { return num1 - num2; }
  T multiply() { return num1 * num2; }
  T divide() { return num1 / num2; }
};

int main() {
  Calculator<int> int_calculator(10, 20);
  cout << "10 + 20 = " << int_calculator.add() << endl;
  cout << "10 - 20 = " << int_calculator.subtract() << endl;
  cout << "10 * 20 = " << int_calculator.multiply() << endl;
  cout << "10 / 20 = " << int_calculator.divide() << endl;

  Calculator<float> float_calculator(1.5, 2.5);
  cout << "1.5 + 2.5 = " << float_calculator.add() << endl;
  cout << "1.5 - 2.5 = " << float_calculator.subtract() << endl;
  cout << "1.5 * 2.5 = " << float_calculator.multiply() << endl;
  cout << "1.5 / 2.5 = " << float_calculator.divide() << endl;

  return 0;
}
