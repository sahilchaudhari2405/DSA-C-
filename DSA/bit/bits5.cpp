#include<iostream>
using namespace std;
int setBit(int n,int posi){
    return ((n&(1<<posi))!=0);
}
void unique(int a[],int n){
    int xorsum=0;
    
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^a[i];
        
    }
    int temp=xorsum;
    int setbit=0;
    int pos=0;
    while (setbit!=1)
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }

    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(a[i],pos-1))
        {
            newxor=newxor^a[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(temp^newxor)<<endl;
    
           
}
int main(){
    int arra[]={1,2,3,7,5,1,2,3};
    unique(arra,8);
    
    return 0;
}