#include<stdio.h>
void main()
{
	int arr[50],i,size,key,f=0;
	printf("Enter the size");
	scanf("%d",&size);
	printf("Enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the searched key: ");
	scanf("%d",&key);
	
	for(i=0;i<size;i++)
	{
		if(key==arr[i])
		{
			f=1;
			
		}
		
	}
	
	if(f==1)
	{
		printf("found ");
	}
	else
		{
			printf("not found");
		}
	
}
