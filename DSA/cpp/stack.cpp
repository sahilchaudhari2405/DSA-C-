#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{

    node *front;
    node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }
    void push(int x)
    {
        node *n = new node(x);
        if (front == n)
        {
          front=n;
          back=n;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"not inside any element"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int pick(){
   if(front==NULL){
       cout<<"not work"<<endl;
       return -1;
   }
      return front->data;
    }
};
int main(){
    Queue a;
  a.push(1);
   cout<<a.pick()<<" ";
   return 0;
}