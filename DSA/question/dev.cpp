#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    int target;
    cin>>target;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
          if (num[i]+num[j]==target)
          {
              cout<<i<<" "<<j<<endl;
          }
          
        }
    }
    
    
    return 0;
}
