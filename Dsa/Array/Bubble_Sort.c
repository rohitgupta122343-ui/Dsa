
#include<stdio.h>

void display(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void Bubble_sort(int arr[],int n){
      int temp;
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
};

int main(){

    int arr[100] = {77,44,1,3,44,8};
    int size = 6;
  
    display(arr,size);
    Bubble_sort(arr,size);
    display(arr,size);
    
    return 0;
}