#include <iostream>

using namespace std;

template <typename T>
class Binary {
public:
  T n;

  void printBinary() {
    int i, count = 0;
    T temp = n;
    while (temp != 0) {
      count++;
      temp = temp / 2;
    }

    for (i = count - 1; i >= 0; i--) {
      cout << (n >> i) & 1;
    }
  }
};

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;

  Binary<int> b(x);
  b.printBinary();

  return 0;
}
