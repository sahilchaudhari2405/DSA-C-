#include <iostream>
using namespace std;
bool issafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool rateinmaze(int **arr, int x, int y, int n, int **souArr)
{
    if ((x == (n - 1)) && (y == (n - 1)))
    {
        souArr[x][y] == 1;
        return true;
    }
    if (issafe(arr, x, y, n))
    {
        return true;
        if (rateinmaze(arr, x + 1, y, n, souArr))
        {
            return true;
        }
        if (rateinmaze(arr, x, y + 1, n, souArr))
        {
            return true;
        }
        souArr[x][y] == 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **souArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        souArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            souArr[i][j] = 0;
        }
    }

    if (rateinmaze(arr, 0, 0, n, souArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << souArr[i][j] << " ";
            }
        }
    }
    return 0;
}