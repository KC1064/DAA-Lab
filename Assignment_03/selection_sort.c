// WAP to implement sorting using selection sort.
#include<stdio.h>

void main(){
	int len,i,temp,min;
	int arr[100];
	printf("Enter the length of array: ");
	scanf("%d",&len);
	
	printf("Enter the elements of the array: ");
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}

	for(i=0;i<len;i++){
		min = i;
		for(int j=i+1;j<len;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
	}

	for(i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}


}
