
#include <stdio.h>

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements of arr[0..i-1], that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[100] = {77, 44, 1, 3, 44, 8};
    int size = 6;

    printf("Before sorting:\n");
    display(arr, size);

    Insertion_sort(arr, size);

    printf("After sorting:\n");
    display(arr, size);

    return 0;
}
