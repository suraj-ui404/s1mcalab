#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
int isfull()
{
	if((rear+1)%max==front)
	{
		return 1;
	}
	return 0;
}	
int isempty()
{
		if(front==-1 &&rear==-1)
		{
			return 1;
		}
	
return 0;
}
void display()
{
	int i; 
	if(isempty())
	{
		printf("\n Queue is Empty\n");
		return;
	}
	printf("\n Queue Elements:");
	i=front;
	do
	{
		printf("%d",queue[i]);
		i=(i+1)%max;
	}
	while(i!=(rear+1)%max);
}
void enqueue()
{
	int x;
	if(isfull())
	{
		printf("queue is full \n");
		return;
	}
	printf("enter the element to insert:");
	scanf("%d",&x);
	if(isempty())
	{
		front=rear=0;
	}
	else
	{
		rear=(rear+1)%max;
	}
	queue[rear]=x;
	printf("\n element %d inserted succesfully\n",queue[rear]);
}
void dequeue()
{
	if(isempty())
	{
		printf("\n Queue is Empty\n");
		return;
	}
	printf("\n%d is deleted \n",queue[front]);
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%max;
	}
}
void search()
{
	int key,i,found=0;
	if(isempty())
	{
		printf("\n Queue is empty\n");
		return;
	}
	printf("\n Enter element to search");
	scanf("%d",&key);
	i=front;
	do
	{
		if(queue[i]==key)
		{
			printf("\n Elements %d found at position %d \n ",key,i);
			found=1;
			break;
		}
		i=(i+1)%max;
	}
	while(i!=(rear+1)%max);
	if(!found)
	{
		printf("\n Elements %d not found in the queue \n",key);
	}
	
}
int main()
{
	int choice;
	printf("CIRCULAR QUEUE USING ARRAY");
	do
	{
	printf("\n 1.enqueue \n2.dequeue \n3.display \n4.search \n5.exit");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			search();
			break;
		case 5:
			printf("Exiting ...\n");
			return 0;
		default:
			printf("Invalid choice");
	}
	}
	while(choice!=5);
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


































	
