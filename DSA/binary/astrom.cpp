#include<iostream>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,orig=n;
    while (n>0)
    {
     int rem=n%n;
     sum=sum+rem+rem+rem;
     n=n/10;
    }
    if(orig==sum){
        cout<<"armstrong number"<<endl;

    }
    else{
        cout<<"it not armstrong number"<<endl;
    }
    return 0;
}