// Delete an element based on posistion

#include<stdio.h>

void main(){
	int pos;
	int arr[20];
	int len,i;

	printf("Enter the length of array: ");
	scanf("%d",&len);

        printf("Enter the elements: \n");
        for(i=0;i<len;i++){
                scanf("%d",&arr[i]);
        }
        
	printf("Enter the position which you want to delete: ");
        scanf("%d",&pos);
        for(i=pos;i<len;i++){
		arr[i]=arr[i+1];
        }

        for(i=0;i<len-1;i++){
                printf("%d ",arr[i]);        }
}

