#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data, int n)
{
    Node* tmp = new Node;
    tmp->data = data;
    tmp->next = NULL;
    if(n == 1) {
        tmp->next = head;
        head = tmp;
        return;
    }
    Node* tmp2 = head;
    for(int i = 0; i < n - 2; i++)
    {
        tmp2 = tmp2->next;
    }
    tmp->next = tmp2->next;
    tmp2->next = tmp;
}

void Reverse(Node* p)
{
   if(p->next == NULL)
   {
       head = p;
       return;
   }
   Reverse(p->next);
   Node* q = p->next;
   q->next = p;
   p->next = NULL;
}

void Print(Node* head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    Insert(4, 1);
    Insert(2, 2);
    Insert(11, 1);
    Insert(26, 3);
    Insert(17, 4);
    Print(head);
    Reverse(head);
    Print(head);
    return 0;
}