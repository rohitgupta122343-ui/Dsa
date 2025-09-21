
#include<stdio.h>

int linearSearch(int arr[],int size,int target){
       
    for(int i = 0; i < size; i++){
        
         if(arr[i] == target){
              return i;
         }
    }

    return 0;
}

int main(){

    int arr[100] = {1,7,33,8,11,2};

    int size = 6;
    int target = 8;
     
    int result = linearSearch(arr,size,target);

    if(result != -1){
       printf("Element %d found at index %d\n", target, result);
    }
    else{
        printf("Element %d Not found in  array %d\n", target, result);
    }
    
    return 0;
}