// Insert an element in a given array based on position.

#include<stdio.h>

void main(){
	int num,pos;
	int i;
	int arr[20];
	int len;
	printf("Enter the length: \n");
	scanf("%d",&len);
	printf("Enter the elements: \n");
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you want to insert:\n");
	scanf("%d",&num);
	printf("Enter the position where you want to insert: ");
	scanf("%d",&pos);
	for(i=len;i>pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=num;

	for(i=0;i<len+1;i++){
		printf("%d ",arr[i]);
	}	
}
