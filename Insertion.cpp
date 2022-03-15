#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element is: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

struct Node * InsertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

struct Node * InsertAtLast(struct Node *head,int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while(p-next!=NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node * InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(strcut Node));
    int i;
    struct Node *p = head;
    while(i!=index)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

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

      cout<<"\nLinked list before insertion"<<endl;
      traversal(head);

      cout<<"\nLinked list after insertion"<<endl;
      //head = InsertAtFirst(head,7);
      //head = InsertAtLast(head,8);
      head = InsertAtIndex(head,5,1);
      traversal(head);

      
      
}