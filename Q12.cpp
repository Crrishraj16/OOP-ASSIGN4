#include <iostream>

using namespace std;

template <typename T>
class SimpleInterest {
public:
  T p, r, t;

  T calculateSI() {
    return (p * r * t) / 100;
  }
};

int main() {
  int x, y;
  float z;

  cout << "Enter the principal amount (integer): ";
  cin >> x;

  cout << "Enter the rate of interest (integer): ";
  cin >> y;

  cout << "Enter the time period (integer): ";
  cin >> z;

  SimpleInterest<int> si1(x, y, z);
  cout << "The simple interest for integer is: " << si1.calculateSI() << endl;

  SimpleInterest<float> si2(x, y, z);
  cout << "The simple interest for float is: " << si2.calculateSI() << endl;

  return 0;
}
