// Bubble Sort

#include<stdio.h>

void main(){
	int index,size;
	int arr[20];
	int j,temp;
	printf("Enter the length of array: ");
	scanf("%d",&size);
        for(index=0;index<size;index++){
                //printf("Enter the values-:");
                scanf("%d",&arr[index]);
        }

	for(index=0;index<size-1;index++){
                for(j=0;j<size-1;j++){
                        if(arr[j]>arr[j+1]){
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }

	for(index=0;index<size;index++){
		printf("%d ",arr[index]);
	}	
}



