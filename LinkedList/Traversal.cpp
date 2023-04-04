#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void PrintLinkedList(node *head)
{
    // node *curr = head;
    // cout << curr << endl;
    // while (curr != NULL)
    // {
    //     cout << curr->data << "-->";
    //     curr = curr->next;
    // }
    // cout << endl;
    if(head == NULL)
    return ;

    cout<<head->data<<"-->";
    PrintLinkedList(head->next);
    
}
int main()
{
    node *head = new node(10);
    // cout << "address of head " << head << endl;
    head->next = new node(20);
    // cout << "address of head->next " << head->next << endl;
    head->next->next = new node(30);
    // cout << "address of head->next->next " << head->next->next << endl;
    head->next->next->next = new node(40);
    // cout << "address of head->next->next->next " << head->next->next->next << endl;
    PrintLinkedList(head);
    return 0;
}