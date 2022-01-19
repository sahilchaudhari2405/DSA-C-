#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,6> arr={2,2,3,4,5,7};
    int maxn=INT_MIN;
    int minn=INT_MAX;
     
    for (int i = 0; i <arr.size(); i++)
    {
        maxn=max(maxn,arr[i]);
        minn=min(minn,arr[i]);
      
    }
    cout<<maxn<<" "<<minn<<endl;

    
    return 0;
}