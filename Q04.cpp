#include <iostream>

using namespace std;

template <typename T, typename U>
void swap(T &a, U &b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 10;
  float y = 20.5;

  swap(x, y);

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  return 0;
}
