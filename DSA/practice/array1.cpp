#include<iostream>
#include<bits\stdc++.h>
using namespace std;

void subarrra(){
    int n,s;
    cin>>n>>s;
  int a[n];
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  int i=0,j=0; int st=-1,ed=-1;int sum=0;
  while (j<n && sum+a[j]<=s)
  {
     sum+=a[j];
  }
  if (sum==s)
  {
      cout<<i+1<<" "<<j<<endl;
      return;
  }
  while (j<n)
  {
      sum+=a[j];
      while (sum>s)
      {
          sum -=a[i];
          i++;
      }
      if (sum==s)
      {
          st=i+1;
          ed=j+1;
          break;
      }
      j++;
  }
  cout<<st<<" "<<ed<<endl;
  
  
  
  
}