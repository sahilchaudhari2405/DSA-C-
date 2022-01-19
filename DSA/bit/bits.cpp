#include<iostream>
using namespace std;
bool bits(int n)
{
    return(n && !(n&n-1));
}

int main(){
cout<<bits(32)<<endl;
return 0;
}