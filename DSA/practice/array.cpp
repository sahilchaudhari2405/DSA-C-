#include<iostream>
#include<bits\stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int target;
    cin>>target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i]+array[j]==target )
            {
                cout<<i<<" "<<j<<endl;
                
            }
            
        }
    }
    return 0;
    
}