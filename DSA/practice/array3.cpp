#include <iostream>
#include <bits\stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int s;
    cin >> s;
    int i = 0, j = 0;
    int st = -1, ed = -1;
    int sum = 0;
    while (j < n && sum + array[j] <= s)
    {
        sum += array[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j;
    }
    while (j < n)
    {
        sum += array[j];
        while (sum > s)
        {
            sum -= array[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            ed = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << ed << endl;
    return 0;
}