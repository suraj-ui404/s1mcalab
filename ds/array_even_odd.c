#include<stdio.h>
void main()
{
	int arr[20],i,size;
	printf("Enter the size");
	scanf("%d",&size);
	printf("enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even numbers:");
	
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
		
	}	
	
	printf("\nodd number:");	
	
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d ",arr[i]);
		}
		
	}		
		
}
