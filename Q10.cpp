#include <iostream>

using namespace std;

template <typename T>
class Test {
public:
  T x;

  void print() {
    cout << "The value of x is: " << x << endl;
  }
};

template <typename T>
void Test<T>::print() {
  // definition of member function template outside the class
}

int main() {
  Test<int> t1(10);
  t1.print();

  Test<float> t2(20.5);
  t2.print();

  return 0;
}
