#include <bits\stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        int count1 = 0;
        int count2 = 0;
        int mins = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if (count1 >= 2 && count2 >= 2)
        {
            if (count1 > count2)
            {
                cout << count2 - 1 << endl;
            }
            else if (count2 > count1)
            {
                cout << count1 - 1 << endl;
            }
            else if (count1 == count2)
            {
                cout << count1 - 1 << endl;
            }
        }
        else
        {
            cout <<"0"<< endl;
        }
    }
}