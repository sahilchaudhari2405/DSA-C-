#include<iostream>
using namespace std;
int power (int n, int pow){
if (pow==0){
    return 1;
}
int privsum=power(n, pow-1);
return n*privsum;
}
int main(){
    
    cout<<power(4,3);
    return 0;

}