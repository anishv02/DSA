#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        cout<<"\nElement is: "<<ptr->data;
        ptr = ptr->next;
    }while(ptr!=head);
}
int main()
{
      struct Node *head;
      struct Node *second;
      struct Node *third;
      struct Node *fourth;

      head = (struct Node*)malloc(sizeof(struct Node));
      second = (struct Node*)malloc(sizeof(struct Node));
      third = (struct Node*)malloc(sizeof(struct Node));
      fourth = (struct Node*)malloc(sizeof(struct Node));
    
    head->prev = NULL;
    head->data = 1;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 4;
    fourth->next = NULL;

    cout<<"\nAs Follows";
    LinkedListTraversal(head);

}