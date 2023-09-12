#include <iostream>

using namespace std;

template <typename T>
T max_value(T arr[], int size)
{
    T max_value = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }
    return max_value;
}

int main()
{
    int arr[] = {10, 4, 1, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_number = max_value(arr, size);
    cout << "The maximum number is: " << max_number << endl;

    return 0;
}
