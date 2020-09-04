#include<stdlib.h>
#include<stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void InsertAtTail(int x)
{
    Node* tmp = (Node*)malloc(sizeof(struct Node));
    tmp->data = x;
    tmp->next = NULL;
    if(head != NULL)
    {
        tmp->next = head;
    }
    head = tmp;
}

void Print(Node* head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    head = NULL;
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        InsertAtTail(i);
    }
    Print(head);
    return 0;
}