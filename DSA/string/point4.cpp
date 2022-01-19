#include<iostream>
using namespace std;
int main(){
    int arra[]={21,22 ,23};
    int *pont=arra;
    for (int i = 0; i < 3; i++)
    {
        cout<<*pont<<endl;
        pont++;
        
    }
    return 0;
}