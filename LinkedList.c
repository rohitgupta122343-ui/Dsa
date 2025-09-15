
#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;
};

void Travel(struct node *ptr){

    while(ptr != NULL){
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }

}


int main(){

    struct node *head = (struct node *)malloc (sizeof(struct node));
    struct node *Second = (struct node *)malloc (sizeof(struct node));
    struct node *Third = (struct node *)malloc (sizeof(struct node));
    struct node *Four = (struct node *)malloc (sizeof(struct node));

    head->data = 10;
    head->next = Second;

    Second->data = 20;
    Second->next = Third;

    Third->data = 30;
    Third->next = Four;

    Four->data = 40;
    Four->next = NULL;

    Travel(head);


    return 0;
}