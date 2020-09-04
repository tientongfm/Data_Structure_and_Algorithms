#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *pre;
};

struct node *head;

struct node* GetNewNode(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->pre = NULL;
    return newNode;
};


void InsertAtHead(int x)
{

} 


int main()
{
    
    return 0;
}