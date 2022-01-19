#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int conditon=1;
    while(conditon<n){
     for (int i = 0; i<n-conditon; i++)
     {
        if (array[i]>array[i+1])
        {
            int temp =array[i];
                array[i]=array[i+1];
                array[i+1]= temp;
        }
        
     }
     conditon++;
    }
    for (int i = 0; i <n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}