#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr)
{
   while(ptr!=NULL)
   {
        cout<<"Element is:  "<<ptr->data;
        ptr = ptr->next;
   }
}

struct Node * deleteAtFirst(struct Node * head)
{
    struct Node * ptr = head;
    head = head->next;
    free(head);
    return ptr;
}

int main()
{
      struct Node *head;
      struct Node *second;
      struct Node *third;
      struct Node *fourth;

      //Allocating memory for nodes in the linked list in the heap
      head = (struct Node*)malloc(sizeof(struct Node));
      second = (struct Node*)malloc(sizeof(struct Node));
      third = (struct Node*)malloc(sizeof(struct Node));
      fourth = (struct Node*)malloc(sizeof(struct Node));

      //Linked first and second node
      head->data = 7;
      head->next = second;

      second->data = 8;
      second->next = third;

      third->data = 9;
      third->next = fourth;

      fourth->data = 10;
      fourth->next = NULL;
    
    cout<<"\nBefore deleting";
    Traversal(head);

    cout<<"\nAfter deleting";
    head = deleteAtFirst(head);
    Traversal(head);
}   