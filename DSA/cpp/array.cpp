#include<bits/stdc++.h>
using namespace std;
  void sum(int arr[], int n, int k) {
        unordered_map<int, int> m;
    int count=0;
        // Store counts of all elements in map m
        for ( int i = 0; i < n; i++) {
          count+=m[k-arr[i]];
            cout<<count<<" ";
            m[arr[i]]++;
          
  }
        cout<<count<<" ";

        // return the half of twice_count
;
    }
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];
    
    }
    sum(arr,n,k);
    return 0;
    
}