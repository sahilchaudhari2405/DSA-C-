#include<iostream>
#include<string>
using namespace std;
string dublecate(string n){
    if (n.length()==0)
    {
        return "";
    }
    char ch=n[0];
   string ans = dublecate(n.substr(1));
   if (ch==ans[0])
   {
      return ans;
   }
   return (ch+ans) ;

    
}
int main(){

cout<<dublecate("aaabbbbcccddd")<<endl;
return 0;
}