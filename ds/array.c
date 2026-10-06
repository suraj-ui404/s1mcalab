#include<stdio.h>
void main()
{
	int arr[20],i,size;
	printf("Enter the size");
	scanf("%d",&size);
	printf("Enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("[");
	 
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]");
}
