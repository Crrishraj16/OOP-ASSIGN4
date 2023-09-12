#include <iostream>

using namespace std;

template <typename T>
T max_template(T a, T b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int x = 10, y = 20;
  float z = 1.5, w = 2.5;

  cout << "The largest of 10 and 20 is: " << max_template(x, y) << endl;
  cout << "The largest of 1.5 and 2.5 is: " << max_template(z, w) << endl;

  return 0;
}
