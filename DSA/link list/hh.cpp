#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertattell(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;
    }
    temp->next = n;
}
void deletes(node *&head, int v)
{
    node *temp = head;
    while (temp->next->data != v)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
node *revesed(node *&head)
{
    node *prv = NULL;
    node *current = head;
    node *nexts;
    while (current != NULL)
    {
        nexts = current->next;
        current->next = prv;
        prv = current;
        current = nexts;
    }
    return prv;
}
node *revesere(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *heads = revesere(head->next);
    head->next->next = head;
    head->next = NULL;
    return heads;
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

int main()
{
    node *head = NULL;
    insertattell(head, 1);
    insertattell(head, 2);
    insertattell(head, 3);
    insertattell(head, 4);
    insertattell(head, 5);
    display(head);

    display(head);
    revesere(head);
    display(head);
}