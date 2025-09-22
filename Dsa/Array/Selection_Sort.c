
#include<stdio.h>

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
};

void Selection_sort(int arr[],int n){
   int min,temp;
    for (int i = 1; i < n; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < min){
                min = j;
            }

            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        
    }
    
    
}

int main(){

    int arr[] = {66,1,99,3,12};
    int n = 5;

   Selection_sort(arr,n);
   display(arr,n);

    return 0;
}