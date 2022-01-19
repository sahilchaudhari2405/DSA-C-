#include <bits/stdc++.h>
using namespace std;
int add(int a)
{

    int x = 1;
    int ans = 0;
    while (x <= a)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int last = a / x;
        a -= last * x;
        x /= 8;
        ans = ans * 10 + last;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << add(n) << endl;
    return 0;
}