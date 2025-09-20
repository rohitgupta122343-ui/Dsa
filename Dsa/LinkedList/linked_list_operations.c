
#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};

void display(struct node *ptr){

    while (ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    
};

struct node * insertAtStart(struct node *head,int data){

     struct node *ptr = (struct node *)malloc (sizeof(struct node));
     
     ptr->next = head;
     ptr->data = data;


     return ptr;


};

struct node * insertAtEnd(struct node *head,int data){

    struct node * ptr = (struct node *)malloc (sizeof(struct node));
    struct node *p = head;

    while(p->next != NULL){
      p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next =NULL;

    return head;

};

int main(){

    struct node * head = (struct node *)malloc (sizeof(struct node));
    struct node * second = (struct node *)malloc (sizeof(struct node));
    struct node * third = (struct node *)malloc (sizeof(struct node));
    struct node * four = (struct node *)malloc (sizeof(struct node));


    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = four;

    four->data = 40;
    four->next = NULL;
      
    //  head = insertAtStart(head,5);
    insertAtEnd(head,50);
     display(head);


    
    return 0;
}