#include <bits/stdc++.h>
using namespace std;
void marge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = mid - r;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + l + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++; /* code */
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++; /* code */
    }
}
void margesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        margesort(arr, l, mid);
        margesort(arr, mid + 1, r);
        marge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {6, 3, 9, 5, 2, 7, 8, 1};
    int l = 0;
    int r = 8;

    margesort(arr, l, r);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}