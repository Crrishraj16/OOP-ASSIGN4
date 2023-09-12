#include <iostream>

using namespace std;

template <typename T>
T area(T x, T y) {
  return x * y;
}

template <typename T>
T area(T r) {
  return 3.14 * r * r;
}

int main() {
  int a, b;
  float r;

  cout << "Enter the length and breadth of the rectangle: ";
  cin >> a >> b;

  cout << "The area of the rectangle is: " << area(a, b) << endl;

  cout << "Enter the radius of the circle: ";
  cin >> r;

  cout << "The area of the circle is: " << area(r) << endl;

  return 0;
}
