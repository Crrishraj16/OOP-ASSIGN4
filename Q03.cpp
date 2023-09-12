#include <iostream>

using namespace std;

template <typename T>
class Array
{
private:
    T *data;
    int size;

public:
    Array(int n)
    {
        size = n;
        data = new T[size];
    }

    ~Array()
    {
        delete[] data;
    }

    void set(int i, T value)
    {
        data[i] = value;
    }

    T get(int i)
    {
        return data[i];
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Array<int> arr(5);

    arr.set(0, 10);
    arr.set(1, 20);
    arr.set(2, 30);
    arr.set(3, 40);
    arr.set(4, 50);

    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << arr.get(i) << " ";
    }
    cout << endl;

    return 0;
}
