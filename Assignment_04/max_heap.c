//WAP to build a max heap
//WAP to delete the elements from the heap one by one 
//Arrange a list of elements in ascending order by using heapsort
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void MaxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        MaxHeapify(arr, n, largest);
    }
}


void BuildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        MaxHeapify(arr, n, i);
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}


void main() {
    int arr[] = {14, 30, 43,25, 18,77,61};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    BuildMaxHeap(arr, n);

    printf("Array after max heap: \n");
    printArray(arr, n);
}

