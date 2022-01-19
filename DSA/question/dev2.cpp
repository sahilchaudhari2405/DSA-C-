#include <iostream>
using namespace std;
void marge(int aar[], int l, int midp, int r)
{
    int n1 = midp - l + 1;
    int n2 = r - midp;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = aar[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = aar[midp + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            aar[k] = a[i];
            k++;
            i++;
        }
        else
        {
            aar[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        aar[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        aar[k] = b[j];
        k++;
        j++;
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
    int arr[] = {5, 4, 3, 2, 1};
    margesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}