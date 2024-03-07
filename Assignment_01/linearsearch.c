// Linear search 

#include<stdio.h>

void main(){
        int num;
        int arr[20];
        int len,i;

        printf("Enter the length of array: ");
        scanf("%d",&len);

        printf("Enter the elements: \n");
        for(i=0;i<len;i++){
                scanf("%d",&arr[i]);
        }

        printf("Enter the value to search: ");
        scanf("%d",&num);

        for(i=0;i<len;i++){
		if(arr[i]==num){
			printf("Element found at %d.\n",i);
			break;
		}
	}
}
