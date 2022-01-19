#include<iostream>
using namespace std;
int howmany(int n){
    int count=0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<howmany(19)<<endl;
    return 0;
}