#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];

int isfull()
{
	if(top==n-1)return 1;
	else return 0;
}
int isempty()
{
	if(top==-1) return 1;
	else return 0;
}
void push(int val)
{
	if(isfull())
	{
		printf("\n Overflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n Pushed Element : %d",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("\n Underflow");
	}
	else
	{
		printf("\n Popped Element : %d",stack[top]);
		stack[top]=-1;
		top--;
	}
}
void findtop()
{
	printf("\n Top position: %d",top);
	printf("\n Top value: %d",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
		printf("\n %d",stack[i]);
	}
}
void main()
{
	while(1)
	{
		int ch;
		printf("\n1.Push\n2.Pop\n3.Display\n4.Find top\n5.Exit\n");
		printf("Enter Your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				if(isfull()==0)
				{	
					int v;
					printf("Enter the value to push:");
					scanf("%d",&v);
					push(v);
				}
				else
				{
					printf("Stack full");
				}
				break;
			}
			case 2:
			{
				if(isempty()==0)
				{	
					pop();
				}
				else
				{
					printf("Stack empty");
				}
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				findtop();
				break;
			}
			case 5:
			{
				printf("Thank You");
				exit(0);
			}
			
		}
	}
}
