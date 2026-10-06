#include<stdio.h>
#define max 10
int stack[max];
int top=-1;
void push(int item)
{
	if(top==max-1)
	{
		printf("stack overflow");
	}
	
	stack[++top]=item;
	printf("\n %d pushed to stack",item);
	
}

void pop()
{
	if(top==-1)
	{
		printf("stack underflow");
		return;
	}

	printf("\n %d popped from stack",stack[top--]);
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty");
		return;
	}
	printf("\n top elements is %d",stack[top]);
}
void display()
{
	if(top==-1)
	{
		printf("\n stack is empty");
		return;
	}
	printf("\n stack element are:");
	for(int i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
}
int main()
{
	int choice ,value;
	while(1)
	{
	printf("\n stack operation menu");
	printf("\n 1.PUSH");
	printf("\n 2.POP");
	printf("\n 3.PEEK");
	printf("\n 4.DISPLAY");
	printf("\n 5.EXIT");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("\n Enter value to push");
			scanf("%d",&value);
			push(value);
			break;
			
		case 2:
			pop();
			break;
			
		case 3:
			peek();
			break;
		
		case 4:
			display();
			break;
		
		case 5:
			printf("\n Exiting program");
			return 0;
		
		default:
			printf("\n Invalid choice");
	}
	}
}
	
	
	
	
