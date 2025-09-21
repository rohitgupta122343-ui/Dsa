
#include<stdio.h>

void deletion(int arr[],int size,int index){
      
    for(int i = index; i < size-1; i++ ){
      arr[i] = arr[i+1];
    }
    
};

void display(int arr[],int size){
    
    for(int i = 0; i < size; i++){

        printf("%d ",arr[i]);

    }
};

int main(){
 
     int arr[10] = {1,2,3,4,5,6};
     
     int size = 6;
     int index = 0;
     
    printf("Before \n");
    display(arr,size);
    
    printf("\nAfter Delection \n");
    deletion(arr,size,index);
    size--;
    display(arr,size); 
    return 0;
}