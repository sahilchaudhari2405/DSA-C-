#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
 
        int count=0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i <n; i++)
        {
         cin>>arr[i];
         count++;
        }
        
        if (count>= 12)
     cout<<"yes\n";
        else{
            cout<<"no\n";
        }
    }

    return 0;
}