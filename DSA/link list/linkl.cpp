#include<iostream>
using namespace std;
class node{
    public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
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
void todelete(node* &head,int value){
  node* temp=head;
 

  
  while (temp->next->data !=value)
  {
      temp=temp->next;
  }
   node* todelete=temp->next;
  temp->next=temp->next->next;

  
}
void display(node* head  ){

    
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
int main(){
node* head=NULL;
toinput(head,1);
toinput(head,2);
toinput(head,3);
toinput(head,4);

display(head);

return 0;

}