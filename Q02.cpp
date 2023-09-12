#include <iostream>

using namespace std;

template <typename T>
T add(T x, T y)
{
    return x + y;
}

int main()
{
    int a = 10, b = 20;
    float c = 1.5, d = 2.5;

    int sum_int = add(a, b);
    float sum_float = add(c, d);

    cout << "The sum of 10 and 20 is: " << sum_int << endl;
    cout << "The sum of 1.5 and 2.5 is: " << sum_float << endl;

    return 0;
}
