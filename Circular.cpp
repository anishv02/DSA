#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
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

    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = head;

    cout<<"\nAs Follows";
    linkedListTraversal(head);
}