

#include<stdio.h>
#include<stdlib.h>

struct stack{
    
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){

    if(ptr->top == -1){
       return 1;
    }
    else{
        return 0;
    }
};

int isFull(struct stack *ptr){
     
    if(ptr->size-1 == ptr->top){
        return 1;
    }
    else{
        return 0;
    }  
};

void push(struct stack *ptr,int val){

    if(isFull(ptr)){
       printf("Stack is a OverFlow: ");
    }
    else{

         ptr->top++;
         ptr->arr[ptr->top] = val;
         
    }

};

int pop(struct stack *ptr){

    if(isEmpty(ptr)){
      printf("Stack is a Empty: ");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
};

void display(struct stack *ptr){

    if(isEmpty(ptr)){
        printf("Stack is a Empty: ");
    }
    else{

        for(int i = 0; i <=ptr->top; i++ ){
            printf("%d \n",ptr->arr[i]);
        }
    }
};

int main(){

    struct stack *s = (struct stack *)malloc (sizeof(struct stack));

    s->size = 90;
    s->top = -1;
    s->arr = (int *)malloc (s->size * (sizeof(int)));

    printf("Before Empty: %d \n",isEmpty(s));
    printf("Before Full:  %d \n",isFull(s));

   push(s,10);
   push(s,20);
   push(s,30);
   push(s,40);
   
   printf("Poped Element is: %d \n",pop(s));
   
   display(s);
       
    printf("After Empty: %d \n",isEmpty(s));
    printf("After Full:  %d \n",isFull(s));

    
    
    return 0;
}