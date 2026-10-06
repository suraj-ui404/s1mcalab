#include<stdio.h>
void main()
{
	int arr[20],i,size,sum=0;
	printf("Enter the size");
	scanf("%d",&size);
	printf("Enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	 
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum=%d",sum);
}
