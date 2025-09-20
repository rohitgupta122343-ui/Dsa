
#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};

void display(struct node *ptr){

    while(ptr != NULL){

     printf("%d\n",ptr->data);
     ptr = ptr->next;

    }

};

struct node *insertAtBetween(struct node *head,int data ,int index){

    struct node *ptr = (struct node *)malloc (sizeof(struct node));
    struct node *p = head;

    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;

    return head;

}


int main(){

    struct node *head = (struct node *)malloc (sizeof(struct node));
    struct node *second = (struct node *)malloc (sizeof(struct node));
    struct node *third = (struct node *)malloc (sizeof(struct node));
    struct node *four = (struct node *)malloc (sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = four;

    four->data = 40;
    four->next = NULL;
    
    insertAtBetween(head,25,2);
    display(head);




    return 0;
}