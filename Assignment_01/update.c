// Update an element based on position

#include<stdio.h>

void main(){
        int pos,num;
        int arr[20];
        int len,i;

        printf("Enter the length of array: ");
        scanf("%d",&len);

        printf("Enter the elements: \n");
        for(i=0;i<len;i++){
                scanf("%d",&arr[i]);
        }

        printf("Enter the position which you want to update: ");
        scanf("%d",&pos);
	printf("Enter the updated value: ");
	scanf("%d",&num);

	arr[pos]=num;
        for(i=0;i<len;i++){
                printf("%d ",arr[i]);        }
}
