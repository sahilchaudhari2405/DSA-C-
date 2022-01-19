#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    array<int, 6> arr1 = {7, 8, 9, 10, 11, 12};
    arr.swap(arr1);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << arr.empty() << " "
         << "empty string";

    return 0;
}