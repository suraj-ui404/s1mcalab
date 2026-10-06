#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*head=NULL;
void insertfirst()
{
	struct node*newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\n No space Available\n");
		return;
	}
	newnode->link=NULL;
	printf("Enter the value to insert to front \n");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->link=head;
		head=newnode;
	}
	printf("\n element inserted %d ",newnode->data);
}

void insertlast()
{
	struct node *temp=head,*newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	if (newnode==NULL)
	{
		printf("\n No space Available");
		return;
	}
	newnode->link=NULL;
	printf("\n Enter the element to insert at the last \n");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{	
		head=newnode;
	}
	else
	{
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		printf("Element inserted successfully %d",newnode->data);
	}
}
void insertlocation()
{
	int key;
	struct node*temp=head,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\n No space available \n");
		return;
	}
	newnode->link=NULL;
	if(head==NULL)
	{
		printf("\n list is empty\n");
		return;
	}
	printf("\n Enter the key were after you want to add elements \n");
	scanf("%d",&key);
	while(temp!=NULL&&temp->data!=key)
	{	
		temp=temp->link;
	}
	if(temp==NULL)
	{
		printf("\n value not Exist \n");
		return;
	}
	printf("enter the element to inserted\n");
	scanf("%d",&newnode->data);
	newnode->link=temp->link;
	temp->link=newnode;
	printf("value inserted sucessfully %d",newnode->data);
}
void deletefirst()
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("\n Empty list \n");
		return;
	}
	head=temp->link;
	printf("\n value deleted %d \n",temp->data);
	free(temp);

}
void deletelast()
{
	struct node*temp=head,*prev=NULL;
	if(head==NULL)
	{
		printf("\n empty list");
		return;
	}
	if(temp->link==NULL)
	{	
		printf("\n value %d deleted \n",temp->data);
		head=NULL;
		free(temp);
		return;
	}
	while(temp->link!=NULL)
	{
		prev=temp;
		temp=temp->link;
	}
	printf("\n value %d deleted\n",temp->data);
	prev->link=NULL;
	free(temp);
}
void deletelocation()
{
	int key;
	struct node*temp=head,*prev=NULL;
	if(head==NULL)
	{
		printf("\n Empty list \n");
		return;
	}
	printf("\n Enter the key that you want to delete\n");
	scanf("%d",&key);
	if(temp->data==key)
	{
		head=temp->link;
		printf("\n value %d is deleted \n",temp->data);
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=key)
	{
		prev=temp;
		temp=temp->link;
	}
	if(temp==NULL)
	{
		printf("\n value not exist \n");
		return;
	}
	prev->link=temp->link;
	printf("value %d is deleted",temp->data);
	free(temp);
}
void search()
{
	struct node *temp=head;
	int pos=0,found=0,val;
	if(head==NULL)
	{
		printf("\n Empty list \n");
		return;
	}
	printf("\n Enter the value to search");
	scanf("%d",&val);
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			printf("%d value found at location %d \n",temp->data,pos+1);
			found=1;
		}
		pos++;
		temp=temp->link;
	}
	if(!found)
	{
		printf("value %d not exist",val);
	}
}
void display()
{
	struct node *temp=head;
	if(temp==NULL)
	{
		printf("\n list empty");
		return;
	}
	printf("\n Elements in the list  \n");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}
void main()
{
	int choice;
	printf("\n singly linked list \n");
	do
	{
		printf("\n 1->INSERT-FIRST \n 2->INSERT-LAST \n 3->INSERT LOCATION \n 4->DELETE FIRST \n 5->DELETE LAST \n 6->DELETELOCATION \n 7->SEARCH \n 8->DISPLAY \n 9->EXIT");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertfirst();
				break;
			case 2:
				insertlast();
				break;
			case 3:
				insertlocation();
				break;
			case 4:
				deletefirst();
				break;
			case 5:
				deletelast();
				break;
			case 6:
				deletelocation();
				break;
			case 7:
				search();
				break;
			case 8:
				display();
				break;
			case 9:
				printf("\nEXIT\n");
				exit(0);
			default:
				printf("\n Invalid choice");
		}
	}
		while(choice!=9);
}



















