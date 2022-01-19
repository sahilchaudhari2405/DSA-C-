#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   
        ll l1,l2,l3;
        cin>>l1>>l2>>l3;
        if(l1==l2 && l3%2==0)
            cout<<"YES"<<"\n";
        else if(l2==l3 && l1%2==0)
            cout<<"YES"<<"\n";
        else if(l1==l3 && l2%2==0)
            cout<<"YES"<<"\n";
        else
        {
            if(l1+l2==l3)
                cout<<"YES"<<"\n";
            else if(l3+l2==l1)
                cout<<"YES"<<"\n";
            else if(l1+l3==l2)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
}    

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}