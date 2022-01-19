#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
         ll n;
         cin>>n;
         vector<ll>arr(n) ;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
         sort(arr.begin(),arr.end());
        cout << (arr[n - 1] - arr[0]) * arr[n - 2];
        cout<<endl;
    }
}