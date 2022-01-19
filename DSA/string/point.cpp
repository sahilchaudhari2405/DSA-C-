#include<bits\stdc++.h>
using namespace std;
int main(){
    int a=10;
    int *aprr = &a;
    cout<<aprr<<endl;
    cin>>*aprr;
    cout<<a<<"a"<<endl;
    
    return 0;
}