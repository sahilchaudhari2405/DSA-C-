#include<iostream>
using namespace std;

int clear(int n,int position){
    int mask=~(1 << position);
    return (n & mask);
}
int main(){
    int n;
    cin>>n;
    int position;
    cin>>position;
    cout<<clear(5,1)<<endl;
    return 0;
}          