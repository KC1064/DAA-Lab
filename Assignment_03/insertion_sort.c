// Write a C program to sort the elements in a given array using insertion sort.
#include <stdio.h>
//#include <time.h>
void main() {
    int i, j, len, arr[100], curr, prev;
    int start,time_taken,end;
    printf("Enter the length of array: ");
    scanf("%d", &len);

    printf("Enter the elements of the array: ");
    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

   // start=clock();
   // printf("%d\n",start);
    for (i = 1; i < len; i++) {
        curr = i;
        int temp = arr[curr];
       
        for (prev = curr - 1; prev >= 0 && arr[prev] > temp; prev--) {
            arr[prev + 1] = arr[prev];
        }
      
        arr[prev + 1] = temp;
    }
   // end=clock();
    //printf("%d\n",end);

  //  time_taken= (end-start)/CLOCKS_PER_SEC;

//    printf("Total time taken: %d\n",time_taken);

    printf("Sorted array: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

