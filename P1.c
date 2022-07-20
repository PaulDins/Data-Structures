#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
	int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
	printf("1.Insert Element\n2.Deletion\n3.Display\n4.Exit");
	while(ch)
	{
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				if(rear==x)
					printf("\nOverflow");
				else
				{
					printf("Enter number %d:",j++);
					scanf("%d",&queue[rear++]);
				}
				break;
			}
			case 2:
			{
				if(front==rear)
				{
					printf("\n Underflow");
				}
				else
				{
					printf("\n Deleted element is %d",queue[front++]);
					 x++;
            			}
            			break;
            		}
        		case 3:
        		{
            			printf("\nQueue Elements are:\n");
            			if(front==rear)
                			printf("\n Nothing To Delete");
            			else
            			{
                			for(i=front; i<rear; i++)
                			{
                    				printf("%d\n",queue[i]);
                			}
                		break;
                		}
                	}
            		case 4:
            		{
                		exit(0);}
            			default:
            			{
                		printf("Wrong Choice: please see the options");
            		}
        	}
    	}
    return 0;
}
					
					
