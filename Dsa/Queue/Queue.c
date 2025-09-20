
#include<stdio.h>
#include<stdlib.h>

struct queue{

    int size;
    int f;
    int r;
    int *arr;

};

int isFull(struct queue *q){

    if(q->r == q->size-1){
        return 1;
    }
    return 0;

};

int isEmpty(struct queue *q){

    if(q->f == q->r){
        return 1;
    }
    else{
        return 0;
    }

};

void enqueue(struct queue *q,int val){

    if(isFull(q)){
        printf("Queue is Full: ");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }

};

int dequeue(struct queue *q){

    if(isEmpty(q)){
        printf("Queue is Empty: ");
    }
    else{
        int a = -1;
        
        q->f++;
        a = q->arr[q->f];
        return a;
    }

};


void display(struct queue *q){

    if(isEmpty(q)){
        printf("Queue is Empty: ");
    }
    else{
        printf("Remaining Elements: \n");
        for(int i = q->f+1; i <= q->r; i++){

            printf("%d \n",q->arr[i]);

        }
    }

};



int main(){

    struct queue *q = (struct queue *)malloc (sizeof(struct queue));

    q->size = 10;
    q->f = -1;
    q->r = -1;
    q->arr = (int *)malloc (q->size * sizeof(int));


    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);

    printf("The Dequeue is %d\n",dequeue(q));

    display(q);

    free(q->arr);
    free(q);


    return 0;
}