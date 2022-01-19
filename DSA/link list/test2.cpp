#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void toinput(node* head,int val ){
    node* n=new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    
node* temp=head;
while (temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}
    node* reverse(node* &head)
    {
        node* preprt=NULL;
        node* current=head;
        node* nextprt;
        while (current!=NULL)
        {
            nextprt=current->next;
            current->next=preprt;
            preprt=current;
            current=nextprt;
        }
        return preprt;
    }
int main()
{
    node *head = NULL;
   toinput(head,1);
    toinput(head,2);
     toinput(head,3);
      toinput(head,4);
      display(head);
      node* newhead=reverse(head);
      display(newhead);
}