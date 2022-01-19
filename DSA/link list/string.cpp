#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
        
    }
};
void insurtat(node *head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    return;
}
void printout(node *&head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
    }
    cout << endl;
    return;
}
int main()
{
    node *head = NULL;
    insurtat(head, 1);
    insurtat(head, 2);
    insurtat(head, 3);
    insurtat(head, 4);
    printout(head);
    return 0;
}