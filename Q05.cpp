#include <iostream>

using namespace std;

class Point {
public:
  int x;
  int y;

  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }
};

template <typename T>
void print(T obj) {
  cout << "x = " << obj.x << endl;
  cout << "y = " << obj.y << endl;
}

int main() {
  Point p(10, 20);

  print(p);

  return 0;
}
