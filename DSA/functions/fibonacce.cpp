#include<iostream>
using namespace std ;
  void fib( int n){
      int a=0;
      int b=1;
      int all;
      for(int i=1;i<=n;i++){
          cout<<a<<" "; 
          int sum=a+b;
          a=b;
          b=sum;

      }
      return;
  }
int main()
{
    int n;
    cin>>n;
    fib (n);
    return 0;

}