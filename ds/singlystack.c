#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*top=NULL;
void push()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
	printf("\n No space available\n");
	return;
	}
	newnode->link=NULL;
	printf("Enter the element to insert:");
	scanf("%d",&newnode->data);
	if(top==NULL)
	{
		top=newnode;
	}
	else
	{
		newnode->link=top;
		top=newnode;
	}
	printf("\n %d inserted successfully",newnode->data);
}
	void pop()
	{
		struct node*temp=top;
		if(top==NULL)
		{
		printf("\n stack underflow");
		return;
		}
		printf("\n %d is popped",temp->data);
		top=temp->link;
		free(temp);
	}
	void peek()
	{
		struct node*temp=top;
		if(top==NULL)
		{
			printf("Stack underflow");
			return;
		}
		printf("Top element is %d",temp->data);
	}
	void display()
	{
		struct node*temp=top;
		if(top==NULL)
		{
			printf("\n no elements");
			return;
			
		}
		printf("Element in stack are:\n");
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
		
	}
	void search()
	{
		struct node*temp=top;
		int key,found=0;
		if(top==NULL)
		{
			printf("\n stack underflow\n");
			printf("Enter the element to search/n");
			scanf("%d",&key);
			while(temp!=NULL)
			{
				if(temp->data==key)
					{
						printf("\n %d Element found \n",temp->data);
						found=1;
					}
				temp=temp->link;
			}
			if(!found)
			{
				printf("Element not found");
			}
		}
	}
	void main()
	{
		int choice;
		do
		{
			printf("\n......Stack.....\n");
			printf("\n 1.PUSH() \n 2.POP() \n 3.PEEK() \n 4.DISPLAY() \n 5.SEARCH() \n 6.EXIT()");
			printf("\n Enter your choice");
			scanf("%d",&choice);
			switch(choice)
		{
			case 1:
				push();
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
				search();
				break;
			case 6:
				printf("\n Exit \n");
				break;
			
			default:
				printf("\n Invalid choice");
		}
			}
			while(choice!=6);
}
			
					
