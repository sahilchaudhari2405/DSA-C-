#include<iostream>
#include<math.h>
using namespace std;
int fac(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
      sum*=i;

    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int ans= fac(n);
    cout<<ans<<endl;
    return 0;
}