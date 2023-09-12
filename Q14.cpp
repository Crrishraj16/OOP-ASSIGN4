#include <iostream>

using namespace std;

template <typename T, typename U>
class STUDENT {
public:
  T name;
  U roll_no;

  void read() {
    cout << "Enter the name of the student: ";
    cin >> name;

    cout << "Enter the roll number of the student: ";
    cin >> roll_no;
  }

  void print() {
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll_no << endl;
  }
};

int main() {
  STUDENT<string, int> s1;
  s1.read();
  s1.print();

  STUDENT<char, float> s2;
  s2.read();
  s2.print();

  return 0;
}
