#include<iostream>
using namespace std;
int main()
{
    int money;
    cin>>money;
    if(money>30000){
        if (money>60000){
            cout<<"go to shoping\n";
        }
        else{
            cout<<"go goa\n";
        }
    }else if(money>1000){
        if(money>50000){
            cout<<"go roadtrip\n";
         }else{
             cout<<"sahil home\n";
         }
          } 
    return 0;
}