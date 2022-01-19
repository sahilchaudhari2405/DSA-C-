#include <bits/stdc++.h>
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
void insertaTTail(node* &head,int value){
    node* n= new node(value);
    node* temp=head;
    while (temp->next !=NULL)              
    {
        temp=temp->next;
    }
    
}

int main()
{
                
}