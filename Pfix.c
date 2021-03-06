#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
# define n 5

int top=-1;
int stack[n];

void push(int x)
{
	stack[++top]=x;
}

int  pop()
{
	return stack[top--];
	return 0;
}

int main()
{
	char exp[20];
	char *e;
	int n1,n2,n3,num;
	printf("Enter the expression :");
	scanf("%s",exp);
	e=exp;
	while (*e !='\0')
	{
		if (isdigit(*e))
		{
			num=*e -48;
			push(num);
		}
		else
		{
			n1=pop();
			n2=pop();
			switch(*e)
			{
				case '+':
					n3=n1 +n2;
					break;
				case '-':
					n3= n1 - n2;
					break;
				case '*':
					n3 =n1 * n2;
					break;
				case '/':
					n3 = n1/n2;
					break;
			}
			push (n3);
		}
		e++;
	}
	printf("Evaluated expression %s = : %d\n\n",exp,pop());
	return 0;

}
