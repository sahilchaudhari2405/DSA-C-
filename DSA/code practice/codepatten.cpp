#include<iostream>
using namespace std;
int main(){
    int row,colume;
    cout<<"enter a number of row:-";
    cin>>row;
    cout<<"enter a number of colume:-";
    cin>>colume;
    for(int i=1;i<=row;i++){
        for (int j=1;j<=colume;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}