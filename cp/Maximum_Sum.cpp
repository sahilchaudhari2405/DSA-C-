#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
 cin>>n;
 int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int sum=0;
int count=0;

for (int i = n-1;i>=0; i--)
{

    if(arr[i]>=0){
        count++;
      sum+=arr[i];
    }
}
if(sum==0 && count==0){
    cout<<max_element(arr,arr+n)<<" "<<1<<endl;
}
else{
cout<<sum<<" "<<count<<endl;
}
return 0;
 
}