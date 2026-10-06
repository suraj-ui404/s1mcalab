#include<stdio.h>
void main()
{
	int a[50],b[50],c[100],n1,n2,i,j,k;
	printf("Enter the size of array");
	scanf("%d",&n1);
	printf("Enter elements in sorted order");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the size of second array");
	scanf("%d",&n2);
	printf("Enter elements in sorted order on second array");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	j=0;
	k=0;
	
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	printf("\n merged array");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d",c[i]);
	}
}
	

