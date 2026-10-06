#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void enqueue(int item)
{
	if(rear==max-1)
	{
		printf("queue overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
	
		rear++;
		queue[rear]=item;
		printf("%d inserted into the queue \n",item);
		
	}
}
void dequeue()
{
	if(front==-1||front >rear)
	{
		printf("queue underflow\n");
	}
	else
	{
		printf("Deleted element is %d \n",queue[front]);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front ++;
		}
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty \n");
	}
	else
	{
		printf("Queue element are:");
		for(i=front;i<=rear;i++)
		{
			printf("%d", queue[i]);
		}
		printf("\n");
	}
}
void peek()
{
	if(front==-1)
	{
		printf("queue is Empty \n");
	}
	else
	{
		printf("front element is %d \n",queue[front]);
	}
}
int main()
{
	int choice,item;
	
	do
	{
		printf("\n..QUEUE OPERATIONS...\n");
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Peek\n");
		printf("5.exit\n");
		
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter the elements:");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				printf("program ended");
				break;
			default:
				printf("invalid choice\n");
				
		}
	}
	while(choice !=5);
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		

























