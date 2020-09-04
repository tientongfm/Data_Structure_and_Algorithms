#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *head;

Node* Insert(Node* head, int x)
{
    Node* tmp = (Node*)malloc(sizeof(struct Node));
    tmp->data = x;
    if(head == NULL) {
        tmp->next = NULL;
    } else
    {
        tmp->next = head;
    }
    head = tmp;
    return head;
}

void Print(Node *head)
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
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Nhap gia tri: ");
        scanf("%d", &x);
        head = Insert(head, x);
        Print(head);
    }
    return 0;
}