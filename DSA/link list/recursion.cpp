#include <iostream>
#include <stack>
using namespace std;
void intseratbot(stack<int> &st,int ele){
   if (st.empty())
   {
     st.push(ele);
     return;
   }
   int topele=st.top();
   st.pop();
   intseratbot(st,ele);
   st.push(topele);
   
   
}
void reverse(stack<int> &st){
  if (st.empty())
  {
    return;
  }
  
 int ele=st.top();
  st.pop();
  reverse(st);
   intseratbot(st,ele);
}


int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
   while (!st.empty())
   {
     cout<<st.top()<<" ";
   }
   return 0;

}
