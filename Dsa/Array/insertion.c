
#include<stdio.h>

void insert(int arr[],int index,int size,int element){

    for(int i = size-1; i >= index; i--){
         arr[i+1] = arr[i];
    }
    arr[index] = element;

};


void display(int arr[],int size){

     for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
     }

};

int main(){

    int arr[100] = {1,2,3,5,6};
     
    int size = 5;
    int index = 3;
    int element = 4;

    display(arr,size);
     
    insert(arr,index,size,element);
    size++;

    printf("\nAfter Inserted: ");
    display(arr,size);
  
    
    return 0;
}