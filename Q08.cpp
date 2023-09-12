#include <iostream>

using namespace std;

template <typename T>
class Test {
public:
  T x;

  Test(T x) {
    this->x = x;
  }
};

int main() {
  Test<int> t1(10);
  Test<float> t2(20.5);
  Test<char> t3('c');

  cout << "The value of t1.x is: " << t1.x << endl;
  cout << "The value of t2.x is: " << t2.x << endl;
  cout << "The value of t3.x is: " << t3.x << endl;

  return 0;
}
