#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int f=1;f<=n-i;f++){
            
                cout<<" ";

            
        }
        for(int j=1;j<=n;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}