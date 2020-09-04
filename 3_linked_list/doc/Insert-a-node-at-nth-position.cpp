#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int data, int n)
{
    Node* tmp1 = new Node;
    tmp1->data = data;
    tmp1->next = NULL;
    if(n == 1) {
        tmp1->next = head;
        head = tmp1;
        return;
    }
    Node* tmp2 = head;
    for(int i = 0; i < n - 2; i++)
    {
        // Node thu 2 khong vao vi nut dau tien da la node cuoi cung cua list roi
        // Tim node cuoi cung dang co trong list
        tmp2 = tmp2->next;
    }
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
}

void Print(Node *head)
{
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    head = NULL;
    Insert(2, 1);
    Insert(5, 2);
    Insert(3, 2);
    Insert(9, 1);
    Print(head);
    return 0;   
}