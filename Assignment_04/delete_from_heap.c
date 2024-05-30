//WAP to delete the elements from the heap one by one
//Arrange a list of elements in ascending order by using heapsort

#include <stdio.h>


void heapifyDown(int heap[], int size, int index) {
    int maxIndex = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < size && heap[leftChild] > heap[maxIndex]) {
        maxIndex = leftChild;
    }
    if (rightChild < size && heap[rightChild] > heap[maxIndex]) {
        maxIndex = rightChild;
    }


    if (maxIndex != index) {
        int temp = heap[index];
        heap[index] = heap[maxIndex];
        heap[maxIndex] = temp;
        heapifyDown(heap, size, maxIndex);
    }
}


void deleteMaxHeapRoot(int heap[], int *size) {
    if (*size <= 0) {
        printf("Heap is empty. No element to delete.\n");
        return;
    }

    heap[0] = heap[*size -1];
    (*size)--; 

  
    heapifyDown(heap, *size, 0);
}


void printHeap(int heap[], int size) {
    printf("Heap: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}


void main() {
    int heap[] = {30, 20, 10, 15, 5};
    int size = 5;


    printf("Heap before deletion:\n");
    printHeap(heap, size);


    deleteMaxHeapRoot(heap, &size);

    printf("Heap after deletion:\n");
    printHeap(heap, size);

}

