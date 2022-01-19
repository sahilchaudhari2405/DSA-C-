#include<iostream>
using namespace std;
void exchange(int n,char str,char del,char base){
    if(n==0)
    {
        return;
    }
    

    exchange(n-1,str,base,del);
    cout<<"To move"<<str<<" "<<"to"<<" "<<del<<endl;
    exchange(n-1,base,del,str);
    cout<<n<<endl;

}
int main(){

exchange(3,'A','B','C');
return 0;

}