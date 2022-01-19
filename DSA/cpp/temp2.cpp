// C++ implementation to find
// Range and coefficient of range
#include <iostream>
#include <numeric>
using namespace std;

// Function to return the minimum element from the array
float getMin(float arr[], int n)
{
	float res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	return res;
}

// Function to return the maximum element from the array
float getMax(float arr[], int n)
{
	float res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	return res;
}

// Function to print the Range and
// Coefficient of Range in the given array
void findRangeAndCoefficient(float arr[], int n)
{
	float max = getMax(arr, n);
	float min = getMin(arr, n);
	float range = max - min;
	float coeffOfRange = range / (max + min);
	cout << "Range : " << range << endl;
	cout << "Coefficient of Range : " << coeffOfRange;
}

// Driver code
int main()
{
	float arr[] = { 5, 10, 15 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findRangeAndCoefficient(arr, n);
	return 0;
}
