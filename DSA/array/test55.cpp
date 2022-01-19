#include <bits/stdc++.h>
using namespace std;
class data
{
public:
    int a, b, c;
    void sum()
    {
    
        c = a + b;
        cout<<c<<endl;
    }
};
int main(){
    data as;
as.a=10;
as.b=20;
as.sum();    
}