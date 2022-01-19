#include<iostream>
using namespace std;
int sum (int n){
if (n==0){
    return 0;
}
int privsum=sum(n-1);
return n+privsum;
}
int main(){
    
    cout<<sum(4);
    return 0;

}