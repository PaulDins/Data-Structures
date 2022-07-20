#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		struct node* prev;
		int data;
		struct node *next;
	};
	int ch,entry;
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	while(1)
	{
	printf("\n\t\n1.Append\n2.Display(Forward)\n3.Display(Reverse)\n4.Deletion\n5.Exit\n\nEnter choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("Enter data: ");
			scanf("%d",&entry);
			if(head==NULL)
			{
				head=(struct node*)malloc(sizeof(struct node));
				head->prev=NULL;
				head->data= entry;
				head->next=NULL;
				pos=head;
				tail=head;
			}
			else
			{
			tail->next=(struct node *)malloc(sizeof(struct node));
			tail->next->prev=tail;
			tail->next->data=entry;
			tail->next->next=NULL;
			tail=tail->next;
			} break;
		}
		case 2:
		{	
			pos=head;
			printf("Elements are: ");
			while(pos!=NULL)
			{
			printf("\t%d",pos->data);
			pos=pos->next;
			} break;
		}
		case 3:
		{
			pos = tail;
			printf("Elements are: ");
			while(pos!=NULL)
			{
			printf("\t%d",pos->data);
			pos=pos-> prev;
			} break;
		}
		case 4:
		{
			if(head==NULL)
			{
				printf("Underflow");
				break;
			}
			else
			{	
				pos=head;
				head=head->next;
				pos->next=NULL;
				head->prev=NULL;
				printf("Element deleted is %d",pos->data);
				free(pos);
				
			}break;
		}
		case 5:
		{
			printf("\n Thank You");
			exit(0);
			break;
		} 
	}
	}
	}
