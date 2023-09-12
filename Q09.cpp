#include <iostream>

using namespace std;

template <typename T>
void reverse(T n) {
  T rev = 0;
  while (n != 0) {
    rev = rev * 10 + n % 10;
    n = n / 10;
  }

  cout << "The reverse of " << n << " is: " << rev << endl;
}

int main() {
  int x = 1234;
  float y = 12.34;
  char z = 'c';

  reverse(x);
  reverse(y);
  reverse(z);

  return 0;
}
