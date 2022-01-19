#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sp = (2 * n -1) / 2;
     for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=sp;j++){
            cout<<" ";
            

        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        sp--;
        cout<<endl;
    }
    int i;
    sp=0;
    for ( i =n; i>= 1; i--)
    {
        for (int j = 1; j <= sp; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        
        cout << endl;
      sp++;
    }
    return 0;
}