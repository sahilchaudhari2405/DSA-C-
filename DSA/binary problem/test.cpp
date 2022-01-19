#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x=55;
int ans=0;
while (x>0)
{
   int last=n/x;
   n-=last*x;
   x/=2;
ans=ans*10+last;
}

cout<<ans<<endl;
return 0;

}