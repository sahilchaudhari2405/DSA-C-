#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "entre a num:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    { // i is even
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}