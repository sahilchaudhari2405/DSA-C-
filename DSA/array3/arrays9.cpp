#include<bits\stdc++.h>
 using  namespace std;
 int kadance(int a[],int n){
     int currentsum=0;
     int maxsum=INT_MIN;
     for (int i = 0; i < n; i++)
     {
        currentsum+=a[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);

     }
     return maxsum;
 }
 int main (){
     int n;
     cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int wraping;
    int nonwraping;
    nonwraping=kadance(a,n);
   int totalnum=0;
    for (int  i = 0; i <n; i++)
    {
        totalnum+=a[i];
        a[i]=-a[i];
    }
    wraping=totalnum+kadance(a,n);
    cout<<nonwraping<<"\n"<<max(wraping,nonwraping)<<endl;
    return 0;
    
}