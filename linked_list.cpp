#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

/*void insertStart(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}*/

void insertEnd(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if(*head==NULL)
    {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while(temp->next!=NULL)
        temp = temp->next;
        temp->next = newNode;
}
int getCurrSize(struct Node* node)
{
    int size=0;
    while(node!=NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void insertAfter(int n, int data, struct Node** head)
{
    int size = getCurrSize(*head);
    if(n < 1 || n > size)
        cout << "Invalid position to insert";

    else
    {
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        struct Node* temp = *head;
        while(--n)
            temp=temp->next;
        newNode->next= temp->next;
        temp->next = newNode;
    }
}

void display(struct Node* node)
{
    while(node!=NULL)
    {
        cout << node->data << " "; node = node->next;
    }
    cout << endl;
}

int main()
{
    struct Node* head = NULL;
    /*insertStart(&head,5);
    insertStart(&head,10);
    insertStart(&head,15);*/


    insertEnd(&head,20);
    insertEnd(&head,25);
    insertEnd(&head,30);
    insertEnd(&head,35);

    insertAfter(3, 100,&head);

    display(head);
    return 0;
}
