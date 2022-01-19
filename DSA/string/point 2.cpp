#include<iostream>
using namespace std;
int main(){
    int n=10;
    int *p= &n;
   cout<<*p<<endl;
   int **q= & p;
   cout<<*q<<endl;
   cout<<**q<<endl;
   return 0;
}