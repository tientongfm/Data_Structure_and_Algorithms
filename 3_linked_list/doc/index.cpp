#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* l)
{
    while(l != NULL)
    {
        cout<< l->data << " ";
        l = l->next;
    }
}


int main()
{
    struct Node* head = new Node;
    struct Node* second = new Node;
    struct Node* third = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    return 0;
}