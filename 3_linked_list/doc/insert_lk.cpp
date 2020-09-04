#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void printList(struct Node* l)
{
    while (l != NULL)
    {
        cout << l->data;
        l = l->next;
    }
}

Node *push(Node* head, int data)
{
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return head;
}

void insertAfter(Node *prev, int data)
{
    if(prev == NULL)
    {
        cout << "Khong the NULL";
        return;
    }
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = prev->next;
    prev->next = new_node;
}

void append(Node *head, int data)
{
    Node* new_node = new Node;
    Node* last = head;
    new_node->data = data;
    new_node->next = NULL;
    // Neu chua co node nao. Thi node vua them vao la node dau tien luon
    if(head == NULL) 
    {
        head = new_node;
        return;
    }
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    return;
}

int main()
{
    Node* head = NULL;
    push(&head, 5);

    printList(head);
    return 0;
}